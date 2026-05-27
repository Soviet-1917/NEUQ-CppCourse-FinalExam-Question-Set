#include<iostream>
using namespace std;
class Student {
public:
	Student(int n,int s): num(n),score(s){}; //【】______{} 构造函数使用成员初始化列表进行初始化
	void display() {
		cout<<num<<" "<<score<<endl;
	}
private:
	int num;
	int score;
};
int main() {
	Student stud[5] = {Student(1,70) ,Student(2,71), Student(3,72),
						Student(4,73), Student(5,74)};//【2】____ stud[5] = {Student(1,70) ,Student(2,71), Student(3,72),//Student(4,73), Student(5,74)}; 
	Student *p=stud; 
	for(int i=0; i<=2; i++) {  //输出第1，3，5个学生的数据
		 p->display();//【3】______display();  //调用成员函数display
		p=p+2;//【4】______  //更新指针变量p
	}
	return 0;
}

