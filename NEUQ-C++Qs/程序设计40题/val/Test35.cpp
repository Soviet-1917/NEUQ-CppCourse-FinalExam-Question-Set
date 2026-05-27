#include <iostream>
using namespace std;
class Complex {
public:
	Complex() {
		real=0;
		imag=0;
	}
	Complex(double r){//【1】______ { //类型转换构造函数，将double类型转换为Complex类型
		real=r;
		imag=0;
	}
	Complex(double r,double i) {
		real=r;
		imag=i;
	}
	operator double(){//【2】______ { //类型转换成员函数，将Complex类型转换为double类型
		return real;
	}
	void display();
private:
	double real;
	double imag;
};
void Complex::display() {
	cout<<"("<<real<<", "<<imag<<")"<<endl;
}
int main() {
	Complex c1(3,4),c2;
	double d1;
	d1=2.5+c1;//【3】______ // double型常量2.5与复数c1相加，运算结果存放在d1中
	cout<<"d1="<<d1<<endl;
	c2=Complex(d1);//c2=【4】______ //将double型变量d1转换为复数类型
	cout<<"c2=";
	c2.display();
	return 0;
}

