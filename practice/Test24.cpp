/**
 * @brief 根据注释完成代码
 */
#include <iostream>
using namespace std;
class Box {
private:
	int length;
	int width;
	int hight;
	【1】______  //访问属性
	【2】______ {  //构造函数
		length = l;
		width = w;
		hight = h;
	}
	int volume() {
		return hight * width * length;
	}
};
int main() {
	【3】______ box1(30, 20, 10);  //定义对象box1 
	【4】______ << endl; //输出box1的体积
	return 0;
}

