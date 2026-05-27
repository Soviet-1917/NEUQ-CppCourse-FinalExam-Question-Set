#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal():itsAge(1) {
		cout << "Mammal constructor"<<endl;
	}
	【1】______ {  //析构函数的定义
		cout << "Mammal destructor"<<endl;
	}
	【2】______ void Speak() const {  //虚函数Speak()的定义
		cout << "Mammal speak!"<<endl;
	}
private:
	int itsAge;
};
class Dog : public Mammal {
public:
	Dog() {
		cout << "Dog Constructor" <<endl;
	}
	~Dog() {
		cout << "Dog destructor" <<endl;
	}
	void Speak() const {
		cout << "Woof!"<<endl;
	}
};
int main() {
	Mammal *pDog = new Dog;
	【3】______Speak();  //使用pDog调用Speak()函数
	【4】______ pDog;  //释放对象
	return 0;
}

