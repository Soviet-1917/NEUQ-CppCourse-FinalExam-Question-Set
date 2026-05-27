#include<iostream>//【1】______
using namespace std;
int main() {
	int mark, result;	//mark是百分制成绩，result是5分制
	cout<<"请输入百分制成绩："<<endl;
	cin>>mark;
	if(mark<0) {
		cout<<"缺考！"<<endl;
		return 0;
	}
	    switch(mark/10) {  //对百分制成绩进行分档 //switch(【2】______) {  //对百分制成绩进行分档 
		case 10:
		    case 9://【3】______:
			result=5;
			cout<<"输出五分制成绩："<<result<<endl;
			break;
		case 8:
			result=4;
			cout<<"输出五分制成绩："<<result<<endl;
			break;//【4】______ //
		case 7:
			result=3;
			cout<<"输出五分制成绩："<<result<<endl;
			break;
		case 6:
			result=2;
			cout<<"输出五分制成绩："<<result<<endl;
			break;
		case 5:	case 4:	case 3:	case 2:	case 1:	case 0:
			result=1;
			cout<<"输出五分制成绩："<<result<<endl;
			break;
		default:
			cout<<"输入错误！"<<endl;
	}
}

