#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int daylon,daynho,chieucao;
	float dientich;
	do{
		cout<<"nhap vao day lon : ";cin>>daylon;
		cout<<"nhap vao day nho : ";cin>>daynho;
		cout<<"nhap vao chieu cao hinh thang : ";cin>>chieucao;
	}while(daylon<=daynho||daylon<=0||daynho<=0||chieucao<=0);
	dientich=1.0*(daylon+daynho)*chieucao/2;
	cout<<"dien tich hinh thang la: "<<dientich;
	return 0;
}