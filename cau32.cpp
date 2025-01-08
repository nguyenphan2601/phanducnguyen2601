#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c,d,e,f,x,y,l,m,n;
	cout<<"nhap lan luot cac he so cua hpt:\nax+by=c\na = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	cout<<"dx+ey=f\nd = ";cin>>d;
	cout<<"e = ";cin>>e;
	cout<<"f = ";cin>>f;
	y=(c*d-f*a)/(b*d-e*a);
	x=(f-e*y)/d;
	cout<<"hpt co nghiem\nx = "<<x;
	cout<<"\ny = "<<y;
	return 0;
	
}