/**
 * @brief 排序
 * @example input :
 * 			output:9 10 15
 */
#include <iostream>
using namespace std;
【1】______ <typename T>
void sort(T a, T b, T c) {
	【2】______ array[3], temp;
	array[0] = a;
	array[1] = b;
	array[2] = c;
	int i,j;
	for(i=0;i<3;i++) {
		for(j=0;j<2;j++)
			if(【3】______) { //如果条件为真，则交换两个数的位置
				temp = array[j];
				array[j] = array[j+1];
				【4】______
			}
	}
	cout<< array[0]<< ' ' << array[1]<< ' ' << array[2]<< endl;
}
int main() {
	sort(15,10,9);
	return 0;
}

