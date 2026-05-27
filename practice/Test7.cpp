#include <iostream>
using namespace std;
int factors(int num, int k) { 
	int count=0;  //count用来统计个数
	while (num%k==0) {
		【1】______;
		num/=k;
	}
	【2】______ count;
}
【3】______ {  //
	【4】______<<"factors(64,3)="<<factors(64,3)<<endl;
	return 0;
}

