#include <iostream>
using namespace std;//【1】______ std;
int main() {
	int i, a, sum;	//sum是a的因子和
	for(a=1; a<1000; a++) {   //for(【2】______; a<1000; a++) {
		sum=0;
		for(i=1; i<a; i++)
		if(a%i==0) sum=sum+i; //	if(a%i==0) 【3】______;  //如果i是a的一个因子，则求因子和
		if(a==sum )//if(【4】______ )  //如果这个数等于它的所有因子和
			cout<<a<<endl;
	}
	return 0;
}

