#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a;
		cout<<"Nhap vap diem chu cua ban(A,B,C,D): ";
		cin>>a;
			switch(a){
		case 'A':
			cout<<"Gioi";
			break;
		case 'B':
			cout<<"Kha";
			break;
		case 'C':
			cout<<"Trung binh";
			break;
		case 'D':
			cout<<"Yeu";
			break;
		default:
			cout<<"khong nhap dung diem";
	}
	return 0;
}