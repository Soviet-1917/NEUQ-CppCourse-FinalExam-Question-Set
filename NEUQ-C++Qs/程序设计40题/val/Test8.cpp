#include <iostream>
#include <cstring>
using namespace std;
void myStrCat(char *dst, char *src);//¡¾1¡¿______  //myStrCatº¯ÊýµÄÉùÃ÷
int main() {        
    char dst[100]="Hello, ";//¡¾2¡¿______ dst[100]="Hello, ";
    char src[100]="Good luck!";
    myStrCat(dst, src);
    cout << dst << endl;
    return 0;
}
void myStrCat(char *dst, char *src) {//¡¾3¡¿______ myStrCat(char *dst, char *src) {
    int i=0, len;
    len = strlen(dst);
    while(src[i]) {
        dst[len] = src[i]; //¡¾4¡¿______ = src[i];
        len++;
        i++;
    }
    dst[len] = '\0';
}

