#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,l,m,n;
	cout<<"nhap lan luot vao 3 canh a,b,c cua tam giac: ";cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
		l=(pow(b,2)+pow(c,2)-pow(a,2))/(2*c*b);
		n=(pow(b,2)+pow(a,2)-pow(c,2))/(2*a*b);
		m=(pow(a,2)+pow(c,2)-pow(b,2))/(2*c*a);
		cout<<"goc A la: "<<acos(l)*180/3.14;
		cout<<endl<<"goc C la: "<<acos(m)*180/3.14;
		cout<<endl<<"goc B la: "<<acos(n)*180/3.14;
	}else
	cout<<"Gia tri 3 canh tam giac khong hop le";
	return 0;
}