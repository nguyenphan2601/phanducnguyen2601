#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,n;
		cout<<"nhap vao gia tri x: ";cin>>x;
		if(x<0){
			cout<<"Bieu thuc khong xac dinh";
		}
		else{
	n=sqrt(1+sqrt(1+sqrt(x)));
	cout<<"gia tri bieu thuc la: "<<n;
}
	return 0;
}