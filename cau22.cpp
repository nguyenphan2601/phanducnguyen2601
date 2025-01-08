#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	cout<<"nhap vao 2 so a va b\na = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"nhap vao phep toan ban can tinh: ";cin>>c;
		if(c=='+')
		cout<<"gt bt a + b = "<<a+b;
		else if(c=='-')
		cout<<"gt bt a - b = "<<a-b;
		else if(c=='*')
		cout<<"gt bt a + b = "<<1ll*a*b;
		else if(c=='/')
		cout<<"gt bt a / b = "<<1.0*a/b;
		else
		cout<<"Ban da chon khong dung yeu cau\n";
	return 0;
}