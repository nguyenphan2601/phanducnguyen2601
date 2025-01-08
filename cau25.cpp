#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Nhap vao so nguyen duong bat ki: ";cin>>n;
	}while(n<=0);
	if(n>=1&&n<=12){
	cout<<"Day la so thang cua 1 nam \n";
	switch(n){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"thang "<<n<<" co 31 ngay";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"thang "<<n<<" co 30 ngay";
			break;
		case 2:
			cout<<"thang 2 co 28 ngay vao nam thuong va 29 ngay vao nam nhuan";
			break;
	}
}
	else
	cout<<"Day khong phai la so thang cua nam";
	return 0;
}