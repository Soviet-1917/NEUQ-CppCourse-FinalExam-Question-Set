#include <iostream>
#include <cstring>
using namespace std;
class MyString {
public:
	MyString() {p=NULL;}
	MyString(char *str) {【1】______}  //数据成员赋值
	【2】______  //友元函数声明
	void display() {cout<<p;}   //输出P所指向的字符串
private:
	char *p;
};
bool operator==(MyString &string1,MyString &string2) {
	if(strcmp(string1.p,【3】______)==0)	return true;  //比较两个字符串
	else	return false;
}
void compare(MyString &string1,MyString &string2) {
	if(【4】______) {  //调用运算符重载函数比较两个字符串
		string1.display();
		cout<<"=";
		string2.display();
	} else {
		string1.display();
		cout<<"!=";
		string2.display();
	}
	cout<<endl;
}
int main() {
	MyString string1("Hello"),string2("Book"),string3("Hello");
	compare(string1,string2); 
	compare(string1,string3);
	return 0;
}


