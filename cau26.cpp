#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b;
	do{
		cout<<"nhap vao do tuoi cua khach hang: ";cin>>a;
		cout<<"nhap vao gia cua san pham: ";cin>>b;
	}while(a<=0||b<=0);
	if(a<=10)
		b=1.0*(b-b*30/100);
	else if(a<=18)
	b=1.0*(b-b*20/100);
	else
	b=b;
	cout<<"Gia kh phai tra la : "<<b;
	return 0;
}