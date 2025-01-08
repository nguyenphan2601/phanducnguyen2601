#include<iostream>
#include<math.h>
using namespace std;
void ptb1(float b,float c){
	if(b==0&&c==0)
	cout<<"pt co vo so nghiem ";
	else if(b!=0&&c==0)
	cout<<"pt co nghiem x=0";
	else if(b==0&&c!=0)
	cout<<"pt vo nghiem";
	else
	cout<<"pt co nghiem: x= "<<-c/b;
}
void ptb2(float d,float a,float b){
	if(d==0){
		cout<<"pt co nghiem duy nhat x="<<-b/(2*a);
	}else if(d<0)
	cout<<"pt vo nghiem";
	else{
		cout<<"pt co 2 nghiem rieng biet"<<endl<<"x1= "<<(-b+sqrt(d))/(2*a);
		cout<<endl<<"x2= "<<(-b-sqrt(d))/(2*a);	
	}
}
int main(){
	float a,b,c,d;
	cout<<"nhap lan luot he so a,b,c cua ptb2 ax^2+bx+c=0";
	cout<<endl<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	if(a==0)
	ptb1(b,c);
	else{
		d=pow(b,2)-4*a*c;
	ptb2(d,a,b);
}
return 0;
}