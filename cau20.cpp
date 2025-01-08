#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c;
	do{
		cout<<"nhap lan luot vao do dai cua 3 canh tam giac:\na = ";cin>>a;
		cout<<"b = ";cin>>b;
		cout<<"c = ";cin>>c;
		if(a+c<=b||a+b<=c||b+c<=a||a<=0||b<=0||c<=0)
		cout<<"3 canh khong hop le\n";
	}while(a+c<=b||a+b<=c||b+c<=a||a<=0||b<=0||c<=0);
	if(a==b&&a==c)
	cout<<"day la tam giac deu ";
	else if((a==b&&a!=c)||(a==c&&b!=c)||(b==c&&a!=b)){
		if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2))
		cout<<"day la tam giac vuong can";
		else 
		cout<<"day la tam giac can";
	}else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2))
	cout<<"day la tam giac vuong";
	else cout<<"day la tam giac thuong";
	return 0;
}