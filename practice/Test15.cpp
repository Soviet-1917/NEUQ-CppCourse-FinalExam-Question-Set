#include<iostream>
using namespace std;
int main() {
	int arr[10],i,j,k;
	【1】______  //遍历数组元素进行赋值
		cin>>arr[i];
	for(i=0; i<10; i++) {
       for(j=0; 【2】______; j++) {
			【3】______ {
				k=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;
			}
		}
	}
	for(i=0; i<10; i++)
		cout<<【4】______ <<" ";
	return 0;
}

