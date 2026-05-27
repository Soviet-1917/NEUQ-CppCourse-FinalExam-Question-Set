#include <iostream>
using namespace std;
class Box {
private:
	int length;
	int width;
	int hight;
public ://【1】______  //访问属性
	Box(int l, int w, int h){//【2】______ {  //构造函数
		length = l;
		width = w;
		hight = h;
	}
	int volume() {
		return hight * width * length;
	}
};
int main() {
	Box box1(30, 20, 10);//【3】______ box1(30, 20, 10);  //定义对象box1 
	cout << "Box1's volume = " << box1.volume() << endl; //输出box1的体积 //【4】______ << endl; //输出box1的体积
	return 0;
}

