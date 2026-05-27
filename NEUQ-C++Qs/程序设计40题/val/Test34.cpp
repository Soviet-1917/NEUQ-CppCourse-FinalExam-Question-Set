#include <iostream>
using namespace std;
class Product {
public:
	Product(int n,int q,float p):num(n),quantity(q),price(p) {};
	void total(); //计算总销售额和总销售数目 
	static float average();//【1】______  //静态average()函数的声明，求平均售价
	static void display(); //输出总销售额和平均售价 
private:
	int num; //售货员工号 
	int quantity; //售出商品数目 
	float price; //商品单价 
	static float discount; //统一的折扣 
	static float sum; //总销售额 
	static int n; //总销售数目 
};
void Product::total() {  
	float rate=1.0;
	if(quantity>10) rate=0.98*rate;
	sum=sum+quantity*price*rate*(1-discount);
	n=n+quantity;
}
void Product::display() {  //【2】______ {  //静态display()函数的定义
	cout<<sum<<endl;
	cout<<average()<<endl;
}
float Product::average() {
	return(sum/n);
}
float Product::discount=0.05;//【3】______ =0.05; //静态成员数据discount的初始化
float Product::sum=0;
int Product::n=0;
int main() {
	Product Prod[3]=
           {Product(101,5,23.5),Product(102,12,24.56),Product(103,100,21.5)};
	for(int i=0; i<3; i++)
		Prod[i].total();
	Product::display();//【4】______ //调用静态成员函数display()输出总销售额和平均售价
	return 0;
}

