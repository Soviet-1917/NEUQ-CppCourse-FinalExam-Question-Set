#include <iostream>
#include <cstring>
using namespace std;
¡¾1¡¿______  //myStrCatº¯ÊýµÄÉùÃ÷
int main() {        
  ¡¾2¡¿______ dst[100]="Hello, ";
    char src[100]="Good luck!";
    myStrCat(dst, src);
    cout << dst << endl;
    return 0;
}
void myStrCat(char *dst, char *src) {
    int i=0, len;
    len = strlen(¡¾3¡¿______);
    while(src[i]) {
        ¡¾4¡¿______ = src[i];
        len++;
        i++;
    }
    dst[len] = '\0';
}

