#include<iostream>
using namespace std;
class Vehicle {
public:
	Vehicle(float sp,float w) {  //构造函数的定义
		speed=sp;
		weight=w;
	}
	void display() {
		cout<<"speed:"<<speed<<" weight"<<weight<<endl;
	}
private:
	float speed;
	float weight;
};
class Bicycle: 【1】______ public Vehicle {  //声明Vehicle为虚基类
public:
	Bicycle(float sp,float w,float h):Vehicle(sp,w) {  //构造函数的定义
		high = h;
	}
protected:
	float high;
};
class Car:virtual public Vehicle {
public:
	【2】______:Vehicle(sp,w) {  //构造函数的定义
		seatnum = num;
	}
protected:
	int seatnum;
};
class Motorcycle: public Bicycle, public Car {
public:
	Motorcycle(float sp,float w,float h,int num):【3】______,Bicycle(sp,w,h),Car(sp,w,num) {}  //成员初始化
	void display() {
		Vehicle::display();
		cout<<" high:"<<high<<" seatnum:"<<seatnum<<endl;
	}
};
int main() {
	【4】______ m(120,120,120,1);  //对象定义
	m.display();
	return 0;
}

