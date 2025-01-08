#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float bankinh,duongcao,s,v;
	do{
		cout<<"nhap vao ban kinh hinh tron ";cin>>bankinh;
		cout<<"nhap vao duong cao ";cin>>duongcao;
	}while(bankinh<=0||duongcao<=0);
	s=M_PI*pow(bankinh,2);
	v=duongcao*s;
	cout<<"the tich  hinh tru la : "<<v;
	return 0;
}