#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b;
	cout<<"nhap vao a va b cua ptbn a*x+b=0\na = ";cin>>a;
	cout<<"b = ";cin>>b;
	if(a==0&&b==0)
	cout<<"pt vo so nghiem";
	else if(a==0)
	cout<<"pt vo nghiem";
	else if(a!=0&&b==0)
	cout<<"pt co nghiem x = 0";
	else 
	cout<<"pt co nghiem x = "<<-b/a;
	return 0;
}