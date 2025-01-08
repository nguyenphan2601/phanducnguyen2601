#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double x,y;
	cout<<"nhap vao gia tri x: ";cin>>x;
	if(x>=5){
		y=2*pow(x,2)+5*x+9;
	}else
	y=-2*pow(x,2)+4*x-9;
	cout<<"Gia tri bieu thuc la: "<<y;
	return 0;
}