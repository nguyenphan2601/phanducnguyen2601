#include<iostream>
using namespace std;
int main(){
	int n,a,b;
	do{
	cout<<"Nhap vao so co 2 chu so: ";cin>>n;
	if(n<10||n>99)
	cout<<"so nhap khong hop le vui long nhap lai\n";
	}
	while(n<10||n>99);
	a=n/10;
	b=n%10;
	switch(a){
		case 1:
			cout<<"Muoi ";
			break;
		case 2:
			cout<<"Hai muoi ";
			break;
		case 3:
			cout<<"Ba muoi ";
			break;
		case 4:
			cout<<"Bon muoi ";
			break;
		case 5:
			cout<<"Nam muoi ";
			break;
		case 6:
			cout<<"Sau muoi ";
			break;
		case 7:
			cout<<"Bay muoi ";
			break;
		case 8:
			cout<<"Tam muoi ";
			break;
		case 9:
			cout<<"Chin muoi ";
			break;
	}
		switch(b){
		case 1:
			cout<<"mot";
			break;
		case 2:
			cout<<"hai";
			break;
		case 3:
			cout<<"ba";
			break;
		case 4:
			cout<<"bon";
			break;
		case 5:
			cout<<"lam";
			break;
		case 6:
			cout<<"sau";
			break;
		case 7:
			cout<<"bay";
			break;
		case 8:
			cout<<"tam";
			break;
		case 9:
			cout<<"chin";
			break;
	}
}