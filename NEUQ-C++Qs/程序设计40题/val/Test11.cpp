#include<iostream>
using namespace std;
#define N 10 //【1】______ N 10  //符号常量的定义
void reverse(int a[], int len) { //a是待操作的数组，len是数组中元素的数目
	int i, t;
	for(i=0;i<N/2; i++) {//for(i=0;【2】______; i++) {
		t = a[i];
		a[i] = a[N-1-i];//【3】______
		a[N-1-i]=t;
	}
}
int main() {
	int a[N], k;
	for(k=0; k<N; k++)
		cin>>a[k];//【4】______>>a[k];
	reverse(a,N);
	for(k=0; k<N; k++)
		cout<<a[k]<<endl;
	return 0;
}

