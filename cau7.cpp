#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,s,l,m;
	do{
		cout<<"nhap vao do dai 2 canh cua tam giac ";cin>>a>>b;
		cout<<"nhap vao do lon goc xen giua ";cin>>c;	
	}
	while(a<0||b<0);
	s=sin(c*3.14/180);
//	cout<<endl<<s<<endl;
	l=(a*b*s)/2;
	cout<<"dien tich tam giac la "<<l;
	return 0;
}