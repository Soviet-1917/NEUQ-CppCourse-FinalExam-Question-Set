/**
 * @brief 将字符串中大小写互换(小写变大写，大写变小写)
 * @example input :Abc
 * 			output:aBC 
 */
#include <iostream>
using namespace std;
void changeString(char str[]) {
for(int i=0; str[i]【1】______'\0'; i++) {
		if(str[i]>='a'&&str[i]<='z')
		【2】______
		else if(str[i]>='A'&&str[i]<='Z')
			str[i] += 32;
	}
}
int main() {
	【3】______ str[50];
	cout<<"输入要变换的字符串：";
	cin>>str;
	changeString(【4】______);
	cout<<"变换结果是："<<str<<endl;
	return 0;
}

