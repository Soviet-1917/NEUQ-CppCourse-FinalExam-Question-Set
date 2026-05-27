#include <iostream>
#include <string>
using namespace std;
class Student {
protected://【1】______  //声明数据成员的访问属性
	int id;
	string name;
	int score;
public:
	Student(int,string,int);
	virtual void display();
};
Student::Student(int i, string n, int cr) {
	id = i;
	name = n;
	score = cr;
}
void Student::display() {
	cout << id << ": " << name << endl;
	cout << score << endl;
}
class Graduate: public Student {//class Graduate: 【2】______ {  //Graduate类公有继承Student类
protected:
	int salary;
public:
	Graduate(int i,string n, int cr, int sa)//【3】______  //构造函数的定义
		:Student(i, n, cr),salary(sa) {}  
	void display();
};
void Graduate::display(){//【4】______ {  //Graduate类成员函数display()函数的定义
	cout << id << ": " << name << endl;
	cout << score << endl;
	cout << salary << endl;
}
int main() {
	Student stu(1, "John", 99);
	stu.display();
	Graduate gra(2, "JOHNLIU", 100, 5000);
	gra.display();
	return 0;
}

