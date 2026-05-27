#include <iostream>
using namespace std; 
【1】______ {
	int n, i, jch;  //jch是阶乘
	double result=0;  //result是结果
	【2】______  //输入n的值
	if(n<1) {
		cout<<"输入错误！"<<endl;
		return 0;
	}
	result=1;
	for(i=2,jch=1; i<=n; 【3】______) {
		【4】______  //计算阶乘
		result+=jch;
	}
	cout<<result<<endl;
	return 0;
}

