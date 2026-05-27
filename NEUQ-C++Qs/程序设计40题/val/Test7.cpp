#include <iostream>
using namespace std;
int factors(int num, int k) { 
	int count=0;  //count用来统计个数
	while (num%k==0) {
		count++;//【1】______;
		num/=k;
	}
	return count;//【2】______ count;
}
int main() {//【3】______ {  //
	cout<<"factors(64,3)="<<factors(64,3)<<endl;//【4】______<<"factors(64,3)="<<factors(64,3)<<endl;
	return 0;
}

