#include<math.h>
#include<iostream>
using namespace std;
int main(){
	int a,b,c,v;
	do{
		cout<<"nhap vao do dai 3 canh cua hinh hop chu nhat ";
		cin>>a>>b>>c;
	}while(a<=0||b<=0||c<=0);
	v=a*b*c;
	cout<<"the tich hinh hop chu nhat la: "<<v;
	return 0;
}