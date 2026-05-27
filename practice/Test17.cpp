#include <iostream>
using namespace std;
class Complex {
private:	
	float real;
	float img;
public:
	Complex(float r=0, float i=0):real(r),img(i) {}
	//定义运算符+的成员重载函数，形参是Complex对象的常引用two
	【1】______ {
		return Complex(real+two.real,【2】______ );
	}
	void display(){
		cout<<"加法的结果为："<<【3】______;
		if(img>=0) cout << "+"; //如果虚部为负数，负数本身有一个"-"号
		cout <<img<<"i"<<endl;
	}
};
int main() {
	Complex one(1.3,-5.2),two(3.7,2.1),result;
	result=【4】______  //计算复数one和two的加法
	result.display();
	return 0;
}

