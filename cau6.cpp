#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,p,s;
	do{
	cout<<"nhap vao 3 canh cua tam giac: ";cin>>a>>b>>c;
	if(a+b<c||a+c<b||b+c<a||a<=00||b<=0||c<=0){
		cout<<"do dai 3 canh khong hop le\n";
	}
	}
	while(a+b<c||a+c<b||b+c<a||a<=00||b<=0||c<=0);
		p=(a+b+c)/2;
		s=p*(p-a)*(p-b)*(p-c);
		cout<<"Dien tich tam giac la :"<<s;
		return 0;
}