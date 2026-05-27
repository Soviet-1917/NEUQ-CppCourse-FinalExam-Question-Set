/**
 * @brief 根据注释完成代码
 */
#include <iostream>
using namespace std;
【1】______ <class numtype>  //类模板声明
class Compare {
public:
	【2】______ {  //构造函数定义
		x=a;
		y=b;
	}
	【3】______max() {
		return (x>y)?x:y;
	}
private:
	numtype x,y;
};
int main() {
	Compare<int> cmp1(3,4);  //定义对象cmp1实现两个整数的比较
	cout<<cmp1.max()<<" is the Maximum of two inteder numbers."<<endl;
	【4】______ cmp2(45.78,93.6);  //定义对象cmp2实现两个单精度浮点数的比较
	cout<<cmp2.max()<<" is the Maximum of two float numbers."<<endl;
	return 0;
}

