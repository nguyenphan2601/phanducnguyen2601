#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"nhap vao do dai 3 canh tam gaic\na = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	cout<<"a,b,c la 3 canh cua tam giac";
	else
	cout<<"a,b,c khong phai 3 canh cua tam giac";
	return 0;
}