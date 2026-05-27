#include <iostream>
#include <cstring>
using namespace std;
void conv(char *s);//¡¾1¡¿______  //convº¯ÊýµÄÉùÃ÷
int main() {
	char s[10];
	int i;
	cin>>s;
	conv(s);//conv(¡¾2¡¿______);
	cout<<s<<endl;
	return 0;
}
void conv(char *s) {
	int len = strlen(s), j;
	for (j=0;j<len/2; j++) {//for (j=0;¡¾3¡¿______; j++) {
		char c = s[j];
		s[j] = s[len-1-j];
		s[len-1-j] = c;//¡¾4¡¿______
	}
}

