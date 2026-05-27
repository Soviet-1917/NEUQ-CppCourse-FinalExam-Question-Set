#include <iostream>
using namespace std;
class Shape {  //形状类 
public:
	virtual double area() const=0;//【1】______  //纯虚函数area()的声明 
};
class Circle: public Shape {  //圆形类 
private:
	double r;
public:
	Circle(double a): r(a) {}//【2】______:r(a) {}  //构造函数的定义
	virtual double area() const {
		return 3.14 * r * r;
	}
};
class Rectangle: public Shape {
private:
	double h, w;
public:
	Rectangle(double a, double b):h(a),w(b) {} //Rectangle(double a, double b):【3】______ {}  //构造函数的成员初始化列表
	virtual double area() const {
		return h * w;
	}
};
class Trapezoid: public Shape {  //梯形类 
private:
	double h, w;
public:
	Trapezoid(double a, double b):h(a),w(b) {}
	virtual double area() const {
		return 0.5 * h * w;
	}
};
void printArea(const Shape &c) {
	cout << c.area()<< endl;//cout << 【4】______ << endl;  //输出对象c的面积
}
int main() {
	Circle c(2);
	printArea(c);
	Rectangle r(2,4);
	printArea(r);
	Trapezoid t(3,5);
	printArea(t);
	return 0;
}

