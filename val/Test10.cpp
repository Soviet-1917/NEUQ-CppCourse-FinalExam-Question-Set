#include<iostream>//【1】______
using namespace std;
int getSum(int m);
int main() {
	int m,s=0;
	m=252;
	s=getSum(m);//s=【2】______;  //求m的各位数字之和并赋值给s
	cout<<s;
	return 0;
}
int getSum(int m) {  //求m的各位数字之和
	int s=0,n;  //n记录各个位上的数字
	while(m!=0) {
		n=m%10;//n=【3】______;  //求m各个位上的数字
		s+=n;
		m=m/10;
	}
	return s;//【4】______ s;
}

