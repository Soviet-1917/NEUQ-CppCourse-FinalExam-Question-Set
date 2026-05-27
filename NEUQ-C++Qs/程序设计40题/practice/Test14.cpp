/**
 * @brief 反转字符串
 * @example input :abcd
 * 			output:dcba
 */
#include <iostream>
#include <cstring>
using namespace std;
【1】______  //conv函数的声明
int main() {
	char s[10];
	int i;
	cin>>s;
conv(【2】______);
	cout<<s<<endl;
	return 0;
}
void conv(char *s) {
	int len = strlen(s), j;
for (j=0;【3】______; j++) {
		char c = s[j];
		s[j] = s[len-1-j];
【4】______
	}
}

