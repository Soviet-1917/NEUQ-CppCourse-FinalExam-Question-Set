#include <iostream>
using namespace std;
class Time {
public:
	//在Time类的构造函数中使用成员初始化列表初始化数据成员
	Time(int h=0, int m=0, int s=0): hour(h),minute(m),sec(s){} //【1】______ {}
	Time operator++() {  //前置++运算符重载函数
	sec++;
	if(sec>=60 ) {//if(【2】______ ) {
		sec=sec-60;
		minute++;
		if(minute>=60) {
			minute=minute-60;
			hour++;
			hour=hour%24;//【3】______
		}
	}
	return *this;
	}
        Time operator ++(int) {//【4】______ {  //后置++运算符重载函数
	        Time temp(*this);  //保存修改前的对象做返回值
	        ++(*this);
	        return temp;
	}
        void display() {
	        cout<<hour<<":"<<minute<<":"<<sec<<endl;
	}
private:
	int hour ;
	int minute;
	int sec;
};
int main()
{
	Time time1(21,34,59), time2;
	cout<<" time1 : ";	
        time1.display();
	++time1;
	cout<<"++time1: ";	
        time1.display();
	time2 = time1++;
	cout<<"time1++: ";	
        time1.display();
	cout<<" time2 : ";	
        time2.display();
	return 0;
}

