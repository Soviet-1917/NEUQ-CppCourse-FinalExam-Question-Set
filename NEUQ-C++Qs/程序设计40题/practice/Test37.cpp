#include<iostream>
#include<string>
using namespace std;
【1】______ Country {
public:
	【2】______ {  //初始化构造函数的定义
		name=nam;
		capital=c;
		country_population=cp;
	}
protected:
	string name;
	string capital;
	long int country_population;
};
class Province:public Country {
public:
	//派生类构造函数的定义
	Province(string nam,string c,long int cp,string pc,long int pp):【3】______ {
		Province_capital=pc;
		Province_population=pp;
	};
	void show() {
		cout<<"name:"<<name<<endl;
		cout<<"capital:"<<capital<<endl;
		cout<<"country_population:"<<country_population<<endl;
		cout<<"Province_capital:"<<Province_capital<<endl;
		cout<<"Province_population:"<<Province_population<<endl;
	}
private:
	string Province_capital;
	long int Province_population;
};
int main() {
	//对象定义
	【4】______ prov1("China","Beijing",1300000000,"Nanchang",45000000);
	prov1.show();
	return 0;
}

