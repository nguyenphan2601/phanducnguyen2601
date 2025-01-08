#include<math.h>
#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,e,f,l,n,m;
		cout<<"nhap vao toa do diem A: ";cin>>a>>b;
		cout<<"nhap vao toa do diem B: ";cin>>c>>d;
		cout<<"nhap vao toa do diem C: ";cin>>e>>f;
		l=sqrt(pow((a-c),2)+pow(d-b,2));
		n=sqrt(pow((a-e),2)+pow(f-b,2));
		m=sqrt(pow((e-c),2)+pow(d-f,2));
	cout<<"Do dai canh AB la "<<l;
	cout<<"\nDo dai canh AC la "<<n;
	cout<<"\nDo dai canh BC la "<<m;
	return 0;
}