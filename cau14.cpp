#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float bankinh,duongcao,sxq;
	do{
		cout<<"nhap vao ban kinh hinh tron ";cin>>bankinh;
		cout<<"nhap vao duong cao ";cin>>duongcao;
	}while(bankinh<=0||duongcao<=0);
	sxq=duongcao*2*M_PI*bankinh;
	cout<<"the tich  hinh tru la : "<<sxq;
	return 0;
}