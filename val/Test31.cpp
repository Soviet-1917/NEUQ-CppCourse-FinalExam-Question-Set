#include <iostream>
using namespace std; 
class Point {
protected:
	int x,y;
public:
	Point() {x=0; y=0;}
	Point(int a, int b) {x=a; y=b;}
	void setX(int a) {x=a;}
	void setY(int b) {y=b;}
	int getX() {return x;}
	int getY() {return y;}
};
class Circle: public Point {
	protected:
		int r;
	public:
		Circle(int x,int y,int r):Point(x,y) {this->r=r;}
		void setR(int a) {r=a;}
		int getR() {return r;}
};
class Cylinder: public Circle {
	protected:
		int h;
	public:
		Cylinder():Circle(0,0,0),h(0) {}
		Cylinder(int x,int y,int r,int h):Circle(x,y,r) {this->h = h;}
		void setH(int a) {h=a;}
		int getH() {return h;}
		friend istream & operator>>(istream &, Cylinder &);
		friend ostream & operator<<(ostream &, Cylinder &);
};
istream & operator>>(istream &input, Cylinder &cc) {
	int _x, _y, _r, _h;
	cout<<"Enter the Cylinder: "<<endl;
	input >>_x >>_y >>_r >>_h;//¡¾1¡¿______ >>_x >>_y >>_r >>_h;
	cc.setX(_x);
	cc.setY(_y);
	cc.setR(_r);
	cc.setH(_h);
	return input;//return ¡¾2¡¿______;
}
ostream & operator<<(ostream & output, Cylinder & cc) {
	output <<cc.getX()<<' '<<cc.getY()<<' '<<cc.getR()<<' '<<cc.getH()<<endl;//¡¾3¡¿______ <<cc.getX()<<' '<<cc.getY()<<' '<<cc.getR()<<' '<<cc.getH()<<endl;
	return output;//return ¡¾4¡¿______;
}
int main() {
	Cylinder cc;
	cin>>cc;
	cout<<cc;
	return 0;
}

