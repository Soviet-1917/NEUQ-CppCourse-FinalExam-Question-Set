#include<iostream>
using namespace std;
double max(double a, double b, double c) {//¡¾1¡¿______ max(double a, double b, double c) {
	if(a>b&&a>c) return a;
	if(b>a&&b>c) return b;//if(¡¾2¡¿______) return b;
	return c;//return ¡¾3¡¿______;
}
int main() {
  cout<<max(3.2,7.4,4.5)<<endl;//¡¾4¡¿______<<max(3.2,7.4,4.5)<<endl;
    return 0;
}

