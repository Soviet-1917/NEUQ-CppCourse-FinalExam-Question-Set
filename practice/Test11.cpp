/**
 * @brief 反转数组，将数组中各个元素进行翻转
 * @example input :1 2 3 4 5 6 7 8 9 0
 * 			output:0 9 8 7 6 5 4 3 2 1
 */
#include<iostream>
using namespace std;
【1】______ N 10  //符号常量的定义
void reverse(int a[], int len) { //a是待操作的数组，len是数组中元素的数目
	int i, t;
for(i=0;【2】______; i++) {
		t = a[i];
【3】______
		a[N-1-i]=t;
	}
}
int main() {
	int a[N], k;
	for(k=0; k<N; k++)
	【4】______>>a[k];
	reverse(a,N);
	for(k=0; k<N; k++)
		cout<<a[k]<<endl;
	return 0;
}

