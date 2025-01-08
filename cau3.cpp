#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x;
	float s;
	cout<<"nhap vao so x : ";cin>>x;
	if(x>=0&&x!=3){
		s=1.0*(1+sqrt(x))/(3-x);
		cout<<"gia tri bieu thuc la:"<<s;
	}else
	cout<<"bieu thuc khong xac dinh";
	return 0;
}