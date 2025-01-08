#include<iostream>
using namespace std;
#include<math.h>;
int main(){
	double a,b,c,d;
	cout<<"giai pt bac 2 a^2*x+b*x+c=0\n";
	cout<<"nhap vao a: ";cin>>a;
	cout<<"nhap vao b: ";cin>>b;
	cout<<"nhap vao c: ";cin>>c;
	if(a==0){
		if(b==0&&c==0)
		cout<<"phuong trinh co vo so nghiem\n";
		else if(b==0&&c!=0)
		cout<<"phuong trinh vo nghiem\n";
		else if(b!=0&&c==0)
		cout<<"phuong trinh co nghiem x=0";
		else
		cout<<"phuong trinh co nghiem x= "<<-b/c<<endl;
	}else{
		d=pow(b,2)-4*a*c;
		if(d==0){
			cout<<"pt co nghiem duy nhat: x= "<<-b/(2*a)<<endl;
		}else if(d<0){
			cout<<"pt vo nghiem\n";
		}else {
			cout<<"pt co 2 nghiem rieng biet \nx1 = "<<(-b+sqrt(d))/(2*a);
			cout<<"\nx2 = "<<(-b-sqrt(d))/(2*a);
		}
	}
	return 0;
}