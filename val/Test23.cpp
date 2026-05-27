#include <iostream>
using namespace std;
class Box {//【1】______ {  //类的声明
public:
	int width;
	int length;
	int hight;
	void box_shape(int w, int l, int h);
	int box_volume(int w, int l, int h);
	int box_area(int w, int l, int h);
};
void Box::box_shape(int w, int l, int h) {  //判断盒子形状
	if((w==l)&&(l==h))//(l==h))
		cout << "这是一个正方体!" << endl;
	else
		cout << "这是一个长方体!" << endl;
}
int main() {
	Box mybox;//【3】______  //对象定义
	cout << "请输入盒子的长、宽、高:";
	cin >> mybox.width >> mybox.length >> mybox.hight;
	//调用成员函数box_shape判断形状
	mybox.box_shape(mybox.width, mybox.length, mybox.hight);//【4】______box_shape(mybox.width, mybox.length, mybox.hight);
	return 0; 
}

