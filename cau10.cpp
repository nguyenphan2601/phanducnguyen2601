#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"nhap vao 3 so a,b,c: ";cin>>a>>b>>c;
	if(a<=b){
		d=a;
		e=b;
	}else{
	d=b;
	e=a;
	}
	if(d<=c){
	cout<<"Gia tri nho nhat la "<<d;}
	else
	cout<<"Gia tri nho nhat la "<<c;
	if(e>=c)
	cout<<"\nGia tri lon nhat la "<<e;
	else
	cout<<"\nGia tri lon nhat la "<<c;
	return 0;
}