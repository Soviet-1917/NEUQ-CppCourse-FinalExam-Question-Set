#include<iostream>
using namespace std;
class Student {
public:
	Student(int n,int s):num(n),score(s) {}
	int num;
	int score;
};
int max(Student *arr) {//int max(【1】______) {  //max函数的参数是一个Student类的指针变量arr
	float max_score=arr[0].score;  //用max_ score记录最高的成绩
	int i, max_num=0;  //用max_num记录成绩最高的学生的学号
	for(i=0; i<3; i++)
		if(max_score<arr[i].score) {//if(【2】______) {  //比较大小，并把大值保存在变量max_score中
			max_score=arr[i].score;
			max_num=arr[i].num; //max_num=【3】______;  //更新max_num
		}
	cout<<max_score<<" "<<max_num<<endl;//cout<<max_score<<" "<<k<<endl;
	return 0;
}
int main() {
	Student stud[3] = {Student(1,70),Student(2,71),Student(3,72)};
	Student *p =&stud[0];//填stud亦可,Student *p =【4】______;  //初始化指向对象数组首地址的指针变量s\
	max(p);
	return 0;
}

