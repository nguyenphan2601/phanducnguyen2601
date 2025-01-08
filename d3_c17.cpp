#include<iostream>
#include<math.h>
using namespace std;
void soluong(int &n){
	do{
	 	cout<<"Nhap vao so luong phan tu mang: ";cin>>n;
	 }
	 while(n<=0||n>50);
}
void nhap(int n,double a[50]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
}
void xuat(int n,double a[50]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}
int main(){
	 int n;
	 double a[50];
	 soluong(n);
	 cout<<"nhap mang cua ban:\n";
	 nhap(n,a);
	 cout<<"Mang cua ban la:\n";
	 xuat(n,a);
	 return 0;	
}