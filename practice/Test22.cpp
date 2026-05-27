/**
 * @brief 根据注释完成代码
 */
#include <iostream>
using namespace std;
class Circular { //圆类
public:
	【1】______ {  //圆类的构造函数
		r = a;
		area = 3.1415926 * r * r;
	}
	double getArea() { //计算圆面积
		return area;
	}
【2】______:  //数据成员的访问属性
	double r;
	double area;
	
};
class Column: public Circular { //从圆类派生圆柱类
protected:
	double h;
	double cubage;
public:
	【3】______ {  //成员初始化
		h = b;   //派生类数据成员的赋值
		cubage = getArea() * h;
	}
	double getCubage() { //计算圆柱体积
		return cubage;
	}
};
int main() {
	Circular circular(45);
	Column column(12, 10);
	【4】______ << endl;  //输出圆的面积
	cout<<"圆柱的体积："<< column.getCubage() << endl;
	return 0;
}

