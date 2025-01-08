#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float s,x;
	cout<<"nhap vao gia tri x = ";cin>>x;
	if(x>=0&&x<=4){
		s=sqrt(1+sqrt(2-sqrt(x)));
		cout<<"gia tri bieu thuc la "<<s;
	}else
	cout<<"bieu thuc khong xac dinh";
	return 0;
}