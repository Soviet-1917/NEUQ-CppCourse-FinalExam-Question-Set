#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std; 
int main() {
	double a,b,c;
	double delta,x1,x2;
	const double zero=1e-9;  //定义一个很小的常数
	int sign;
	cout<<"输入三个系数a(a!=0), b, c:"<<endl;
	【1】______>>a>>b>>c;  //输入a、b、c的值
	if(fabs(a)<zero) {  //绝对值很小的数即被认为是0
		cout<<"二次项系数为0，方程根是-c/b";
		exit(0);
	}
	cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<endl;
	delta=【2】______
	if(fabs(delta)<zero) {  //绝对值很小的数即被认为是0
		cout<<"方程有两个相同实根:";
		cout<<"x1=x2="<<-b/(2*a)<<endl;
	} else {
		if(delta>0) sign=1;
		【3】______ sign=0;
		delta=sqrt(fabs(delta));
		x1=-b/(2*a);
		x2=delta/(2*a);
		if(【4】______ ) {
			cout<<"方程有两个不同实根:";
			cout<<"x1="<<x1+x2<<'\t'<<"x2="<<x1-x2<<endl;
		} else { //sign==0 
			cout<<"方程有两个不同复数根:"; 
			cout<<"x1="<<x1<<"+i"<<x2<<'\t'<<"x2="<<x1<<"-i"<<x2<<endl;
		}
	}
}

