#include <iostream>
using namespace std;
void compare(int a[], int b[], int n) {
	¡¾1¡¿______ equal = true;
	for(int index=0; index<n; index++) {
		if(a[index] != b[index]) {
			equal = ¡¾2¡¿______;
			¡¾3¡¿______;
		}
	}
	if(equal==true)
		cout << "Equal!" << endl;
	else
		cout << "Not equal!" << endl;
}

void input(int a[], int b[], int n) {
	int index;
	¡¾4¡¿______(index=0; index<n; index++) { //
		cin >> a[index];
	}
	for(index=0; index<n; index++) {
		cin >> b[index];
	}
	
}
int main() {
	int a[5], b[5];
	input(a, b, 5);
	compare(a, b, 5);
	return 0;
}

