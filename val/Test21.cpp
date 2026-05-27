#include<iostream>//【1】______
using namespace std;
int main() {
	int i, n, temp=0;
	cout<<"输入数组大小:";
	cin>>n;  //输入需要的数组大小
	double *array = new double[n];//double *array = new 【2】______;  //动态申请数组
	cout<<"给每个数组元素赋值："<< endl;
	for(i=0; i<n; i++) {
		cout<<"array["<< i <<"] = ";
		cin>>array[i];//cin>>【3】______;  //输入各个数组元素的值
	}
	cout<<"动态数组个元素的值如下："<< endl;
	for(i=0; i<n; i++) {
		cout<<"array["<< i <<"] = "<< array[i] << endl;  //打印数组元素
	}
	delete []array;//【4】______ array;  //释放动态数组
	return 0;
}

