#include <iostream>
using namespace std;
class IntRMB {  //人民币类
    private://【1】______  //访问属性
		int IYuan;
		int Jiao;
		int Fen;
	public:
		IntRMB(int y=0,int j=0,int f=0);  //构造函数的声明
		void print();
		operator  float(){//【2】______ float() {  //float类型转换函数的定义
			float temp;
			temp=float(IYuan+(Jiao/10.0)+(Fen/100.0));
			return temp;
		}
};
IntRMB::IntRMB(int y,int j,int f) { //构造函数的实现
	IYuan=y;
	Jiao=j;
	Fen=f;
}
void IntRMB::print() {
	cout <<IYuan << "元" <<Jiao << "角" <<Fen <<"分" <<endl;
}
int main() {
	float a;
	IntRMB m(10,25,3);//【3】______ m(10,25,3); //定义人民币对象
	cout << "***转换前***" <<endl;
	m.print();
	a=float(m);//a=【4】______;  //使用重载类型float进行强制类型转换
	cout << "***转换后***" <<endl;
	cout<<a<<"圆"<<endl;
	return 0;
}

