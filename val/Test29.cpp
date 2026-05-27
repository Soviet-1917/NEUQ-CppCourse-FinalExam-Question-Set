#include <iostream>
using namespace std;
class Matrix { //定义Matrix类
public:
	Matrix(); //默认构造函数
	friend Matrix operator+(Matrix &,Matrix &); //【1】______ Matrix operator+(Matrix &,Matrix &); //运算符"+"的友元重载函数
	void input(); //输入函数
	void display(); //输出函数
private:
	int mat[2][3];
};
Matrix::Matrix() { //定义构造函数
	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			mat[i][j]=0;
}
Matrix operator+(Matrix &a,Matrix &b) { //定义重载运算符"+"函数
	Matrix c;
	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++) {
			c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
		}
	return c;//return 【2】______;
}
void Matrix::input() {//【3】______ { //定义输入函数
	cout<<"input value of matrix:"<<endl;
	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			cin>>mat[i][j];
}
void Matrix::display() { //定义输出函数
	for (int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	Matrix a,b,c;
	a.input();
	b.input();
	cout<<endl<<"Matrix a:"<<endl;
	a.display();
	cout<<endl<<"Matrix b:"<<endl;
	b.display();
	c=a+b;//c=【4】______; //用重载运算符"+"实现两个矩阵相加
	cout<<endl<<"Matrix c = Matrix a + Matrix b :"<<endl;
	c.display();
	return 0;
}

