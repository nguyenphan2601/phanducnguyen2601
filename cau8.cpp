#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string a,b,c;
	cout<<"Nhap vao ho va ten: ";getline(cin,a);
	cout<<"Nhap vao ngay sinh cua sinh vien (ngan cach nhau bang dau/)";getline(cin,b);
	cout<<"Nhap vao que quan: ";getline(cin,c);
	cout<<"Thong tin sinh vien la \n"<<a<<endl<<b<<endl<<c;
	return 0;
}