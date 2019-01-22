# pdb ripper

Extracts UserDefinedTypes from pdb file and generates cpp code

## Usage

```
Dia2Dump.exe -rip [flags] ... <input.pdb>
-s		: include symbol hierarchy
-m		: generate UDT with meta information
-cpp	: generate cpp code
-d		: include class deps
-rd		: resolve/sort class deps
-names	: select specific UDTs (-names "nameA;nameB;-excludeC")
```

## How it works

Imagine some code compiled into test.exe / test.pdb

```
class Shape {
public:
   Shape(int newx, int newy);
   virtual ~Shape();
   int getX();
   int getY();
   void setX(int newx);
   void setY(int newy);
   void moveTo(int newx, int newy);
   void rMoveTo(int deltax, int deltay);
   virtual void draw();
private:
   int x;
   int y;
};
Shape::Shape(int newx, int newy) { moveTo(newx, newy); }
Shape::~Shape() {}
int Shape::getX() { return x; }
int Shape::getY() { return y; }
void Shape::setX(int newx) { x = newx; }
void Shape::setY(int newy) { y = newy; }
void Shape::moveTo(int newx, int newy) { setX(newx); setY(newy); }
void Shape::rMoveTo(int deltax, int deltay) { moveTo(getX() + deltax, getY() + deltay); }
void Shape::draw() {}
```

```
class Rectangle: public Shape {
public:
   Rectangle(int newx, int newy, int newwidth, int newheight);
   int getWidth();
   int getHeight();
   void setWidth(int newwidth);
   void setHeight(int newheight);
   void draw();
private:
   int width;
   int height;
};
Rectangle::Rectangle(int newx, int newy, int newwidth, int newheight): Shape(newx, newy) { setWidth(newwidth); setHeight(newheight); }
int Rectangle::getWidth() { return width; }
int Rectangle::getHeight() { return height; }
void Rectangle::setWidth(int newwidth) { width = newwidth; }
void Rectangle::setHeight(int newheight) { height = newheight; }
void Rectangle::draw() { printf("Rectangle %d %d %d %d\n", getX(), getY(), getWidth(), getHeight()); }
```

```
class Circle: public Shape {
public:
   Circle(int newx, int newy, int newradius);
   int getRadius();
   void setRadius(int newradius);
   void draw();
private:
   int radius;
};
Circle::Circle(int newx, int newy, int newradius): Shape(newx, newy) { setRadius(newradius); }
int Circle::getRadius() { return radius; }
void Circle::setRadius(int newradius) { radius = newradius; }
void Circle::draw() { printf("Circle %d %d %d\n", getX(), getY(), getRadius()); }
```

Invite the ripper to do some work:
`Dia2Dump.exe -rip -s -m -cpp -d -rd -names "Rectangle;Circle" test.pdb > gen.h`

Generated file:
```
//UDT: class Shape @len=16 @vfcount=2
	//_VTable: 
	//_Func: public void Shape(Shape &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void Shape(int newx, int newy); @loc=static @len=62 @rva=6768
	//_Func: public void ~Shape(); @intro @virtual vtpo=0 vfid=0 @loc=static @len=21 @rva=7664
	//_Func: public int getX(); @loc=static @len=14 @rva=14208
	//_Func: public int getY(); @loc=static @len=14 @rva=14224
	//_Func: public void setX(int newx); @loc=static @len=22 @rva=14960
	//_Func: public void setY(int newy); @loc=static @len=22 @rva=14992
	//_Func: public void moveTo(int newx, int newy); @loc=static @len=51 @rva=14720
	//_Func: public void rMoveTo(int deltax, int deltay); @loc=static @len=74 @rva=14784
	//_Func: public void draw(); @intro @virtual vtpo=0 vfid=1 @loc=static @len=6 @rva=13808
	//_Data: this+0x8, Member, Type: int, x
	//_Data: this+0xC, Member, Type: int, y
	//_Func: public Shape & operator=(Shape &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void * __vecDelDtor(unsigned int  _arg0); @intro @virtual vtpo=0 vfid=0 @loc=optimized @len=0 @rva=0
//UDT;

class Shape {
public:
	int x;
	int y;
	inline Shape()  { }
	inline void ctor(int newx, int newy) { typedef void (*_fpt)(Shape *pthis, int, int); _fpt _f=(_fpt)_drva(6768); _f(this, newx, newy); }
	virtual ~Shape();
	inline void dtor() { typedef void (*_fpt)(Shape *pthis); _fpt _f=(_fpt)_drva(7664); _f(this); }
	inline int getX() { typedef int (*_fpt)(Shape *pthis); _fpt _f=(_fpt)_drva(14208); return _f(this); }
	inline int getY() { typedef int (*_fpt)(Shape *pthis); _fpt _f=(_fpt)_drva(14224); return _f(this); }
	inline void setX(int newx) { typedef void (*_fpt)(Shape *pthis, int); _fpt _f=(_fpt)_drva(14960); return _f(this, newx); }
	inline void setY(int newy) { typedef void (*_fpt)(Shape *pthis, int); _fpt _f=(_fpt)_drva(14992); return _f(this, newy); }
	inline void moveTo(int newx, int newy) { typedef void (*_fpt)(Shape *pthis, int, int); _fpt _f=(_fpt)_drva(14720); return _f(this, newx, newy); }
	inline void rMoveTo(int deltax, int deltay) { typedef void (*_fpt)(Shape *pthis, int, int); _fpt _f=(_fpt)_drva(14784); return _f(this, deltax, deltay); }
	virtual void draw_vf1();
	inline void draw_impl() { typedef void (*_fpt)(Shape *pthis); _fpt _f=(_fpt)_drva(13808); return _f(this); }
	inline void draw() { return draw_vf1(); }
};

//UDT: class Rectangle @len=24 @vfcount=2
	//_Base: class Shape @off=0 @len=16
	//_Func: public void Rectangle(Rectangle *  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void Rectangle(Rectangle &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void Rectangle(int newx, int newy, int newwidth, int newheight); @loc=static @len=106 @rva=6656
	//_Func: public int getWidth(); @loc=static @len=14 @rva=14192
	//_Func: public int getHeight(); @loc=static @len=14 @rva=14160
	//_Func: public void setWidth(int newwidth); @loc=static @len=22 @rva=14928
	//_Func: public void setHeight(int newheight); @loc=static @len=22 @rva=14864
	//_Func: public void draw(); @virtual vtpo=0 vfid=1 @loc=static @len=102 @rva=13696
	//_Data: this+0x10, Member, Type: int, width
	//_Data: this+0x14, Member, Type: int, height
	//_Func: public void ~Rectangle(); @virtual vtpo=0 vfid=0 @loc=static @len=24 @rva=7632
	//_Func: public Rectangle & operator=(Rectangle *  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public Rectangle & operator=(Rectangle &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void * __vecDelDtor(unsigned int  _arg0); @intro @virtual vtpo=0 vfid=0 @loc=optimized @len=0 @rva=0
//UDT;

class Rectangle : public Shape {
public:
	int width;
	int height;
	inline Rectangle()  { }
	inline void ctor(int newx, int newy, int newwidth, int newheight) { typedef void (*_fpt)(Rectangle *pthis, int, int, int, int); _fpt _f=(_fpt)_drva(6656); _f(this, newx, newy, newwidth, newheight); }
	inline int getWidth() { typedef int (*_fpt)(Rectangle *pthis); _fpt _f=(_fpt)_drva(14192); return _f(this); }
	inline int getHeight() { typedef int (*_fpt)(Rectangle *pthis); _fpt _f=(_fpt)_drva(14160); return _f(this); }
	inline void setWidth(int newwidth) { typedef void (*_fpt)(Rectangle *pthis, int); _fpt _f=(_fpt)_drva(14928); return _f(this, newwidth); }
	inline void setHeight(int newheight) { typedef void (*_fpt)(Rectangle *pthis, int); _fpt _f=(_fpt)_drva(14864); return _f(this, newheight); }
	virtual void draw_vf1();
	inline void draw_impl() { typedef void (*_fpt)(Rectangle *pthis); _fpt _f=(_fpt)_drva(13696); return _f(this); }
	inline void draw() { return draw_vf1(); }
	virtual ~Rectangle();
	inline void dtor() { typedef void (*_fpt)(Rectangle *pthis); _fpt _f=(_fpt)_drva(7632); _f(this); }
};

//UDT: class Circle @len=24 @vfcount=2
	//_Base: class Shape @off=0 @len=16
	//_Func: public void Circle(Circle *  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void Circle(Circle &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void Circle(int newx, int newy, int newradius); @loc=static @len=92 @rva=5856
	//_Func: public int getRadius(); @loc=static @len=14 @rva=14176
	//_Func: public void setRadius(int newradius); @loc=static @len=22 @rva=14896
	//_Func: public void draw(); @virtual vtpo=0 vfid=1 @loc=static @len=80 @rva=13616
	//_Data: this+0x10, Member, Type: int, radius
	//_Func: public void ~Circle(); @virtual vtpo=0 vfid=0 @loc=static @len=24 @rva=7152
	//_Func: public Circle & operator=(Circle *  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public Circle & operator=(Circle &  _arg0); @loc=optimized @len=0 @rva=0
	//_Func: public void * __vecDelDtor(unsigned int  _arg0); @intro @virtual vtpo=0 vfid=0 @loc=optimized @len=0 @rva=0
//UDT;

class Circle : public Shape {
public:
	int radius;
	inline Circle()  { }
	inline void ctor(int newx, int newy, int newradius) { typedef void (*_fpt)(Circle *pthis, int, int, int); _fpt _f=(_fpt)_drva(5856); _f(this, newx, newy, newradius); }
	inline int getRadius() { typedef int (*_fpt)(Circle *pthis); _fpt _f=(_fpt)_drva(14176); return _f(this); }
	inline void setRadius(int newradius) { typedef void (*_fpt)(Circle *pthis, int); _fpt _f=(_fpt)_drva(14896); return _f(this, newradius); }
	virtual void draw_vf1();
	inline void draw_impl() { typedef void (*_fpt)(Circle *pthis); _fpt _f=(_fpt)_drva(13616); return _f(this); }
	inline void draw() { return draw_vf1(); }
	virtual ~Circle();
	inline void dtor() { typedef void (*_fpt)(Circle *pthis); _fpt _f=(_fpt)_drva(7152); _f(this); }
};
```

Inject dll into test.exe and do some manipulations:

```
template<typename T, typename ...Args>
static inline T* new_udt(Args&&... params) {
	T* obj = (T*)malloc(sizeof(T));
	obj->ctor(std::forward<Args>(params)...);
	return obj;
}

Circle* obj = new_udt<Circle>(0, 0, 10);
obj->draw();
```
