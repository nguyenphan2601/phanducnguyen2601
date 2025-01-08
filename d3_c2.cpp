#include<iostream>
#include<math.h>
using namespace std;
double dodai(double xa,double ya,double xb,double yb){
	double dd=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
	return dd;
}
int main(){
	double xa,xb,xc,ya,yb,yc;
	cout<<"nhap vao toa do 3 diem\nA(xa,ya):\nxa = ";cin>>xa;
	cout<<"ya = ";cin>>ya;
	cout<<"B(xb,yb):\nxb = ";cin>>xb;
	cout<<"yb = ";cin>>yb;
	cout<<"C(xc,yc):\nxc = ";cin>>xc;
	cout<<"yc = ";cin>>yc;
	cout<<"Do dai AB la: "<<dodai(xa,ya,xb,yb)<<endl;
	cout<<"Do dai AC la: "<<dodai(xa,ya,xc,yc)<<endl;
	cout<<"Do dai CB la: "<<dodai(xc,yc,xb,yb)<<endl;
	return 0;
}