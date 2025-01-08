#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float s;
	int x;
	cout<<"nhap vao gia tri x can tim: ";cin>>x;
	if(x!=1){
		s=1.0*(exp(x)+1)/(x-1);
		cout<<"gia tri bieu thuc la: "<<s;
	}
	else
	cout<<"Bieu thuc khong xac dinh";
	return 0;
}