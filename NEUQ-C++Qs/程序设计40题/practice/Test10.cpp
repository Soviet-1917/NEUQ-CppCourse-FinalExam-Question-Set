/**
 * @brief 一个数m,求m每一位的数字之和
 */
【1】______
using namespace std;
int getSum(int m);
int main() {
	int m,s=0;
	m=252;
	s=【2】______;  //求m的各位数字之和并赋值给s
	cout<<s;
	return 0;
}
int getSum(int m) {  //求m的各位数字之和
	int s=0,n;  //n记录各个位上的数字
	while(m!=0) {
		n=【3】______;  //求m各个位上的数字
		s+=n;
		m=m/10;
	}
	【4】______ s;
}

