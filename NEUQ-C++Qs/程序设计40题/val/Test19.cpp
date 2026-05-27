#include <iostream>
using namespace std;
template <typename T>
    int sum(T a[],int n) {//【1】______ sum(T a[],int n) {  //求数组a所有元素的和
	int i;
	T s=0;
	for(i=0;i<n;i++)
		s = s + a[i];//s = s + 【2】______;
	return s;//【3】______ s;
}
int main() {
	int a[5]={1,2,3,4,5}, s;
	s = sum(a,5);//s =【4】______;  //求数组a所有元素的和
	cout<<s<< endl;
	return 0;
}

