#include <iostream>
using namespace std;
class Complex {
private:
	double real;
	double imag;
public:
	Complex() {
		real=0;
		imag=0;
	}
	Complex(double r,double i) {
		real=r;
		imag=i;
	}
	Complex operator+(【1】______) {  //两个复数的加法，参数使用引用形式
		return Complex(real+c.real, imag+c.imag );
	}
	Complex operator+(int &i) {  //复数+整数，参数使用引用
		return Complex(【2】______,imag);
	}
	【3】______ Complex operator+(int &i,Complex &c);  //友元函数声明
  	void display() {
		cout<<"("<<real<<","<<imag<<"i)"<<endl;
	}
};
Complex operator+(int &i,Complex &c) {  //整数+复数
return Complex(i+c.real,c.imag);
}
int main() {
	【4】______ c1(3,4),c2(5,-10),c3;  //对象的定义
	int i=5;
	c3=c1+c2;
	cout<<"c1+c2=";
	c3.display();
	c3=i+c1;
	cout<<"i+c1=";
	c3.display();
	c3=c1+i;
	cout<<"c1+i=";
	c3.display();
	return 0;
}

