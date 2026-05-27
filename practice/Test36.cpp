#include <iostream>
using namespace std;
class Time {
public:
	Time() {
		minute=0;
		sec=0;
	}
	Time(int m,int s):minute(m),sec(s) {}
	Time operator++() { //前置++的重载成员函数
		if(++sec>=60) {
			sec-=60;
			++minute;
		}
		return 【1】______;
	}
	Time 【2】______ { //后置++的重载成员函数
		Time temp(*this);
		sec++;
		if(【3】______ ) {
			sec-=60;
			++minute;
		}
		return 【4】______;
	}
	void display() {
		cout<<minute<<":"<<sec<<endl;
	}
private:
	int minute;
	int sec;
};
int main() {
	Time time1(34,0), time2(35,0);
	for (int i=0; i<61; i++) {
		++time1;
		time1.display();
	}
	for (int j=0; j<61; j++) {
		time2++;
		time2.display();
	}
	return 0;
}

