#include<iostream>
#include<math.h>
using namespace std;
void nhapmang(int n, int a[50]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
}
void xuatmang(int n, int a[50]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void xapsep(int n,int a[50],int temp){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int n,temp,a[50];
	do{
		cout<<"nhap vao so luong phna tu n cua mang: ";cin>>n;
	}while(n<=0||n>50);
	cout<<"nhap vao mang cua ban:\n";
	nhapmang(n,a);
	cout<<"mang cua ban la:\n";
	xuatmang(n,a);
	xapsep(n,a,temp);
	cout<<"\nmang sap xep theo thu tu tang dan la:\n";
	xuatmang(n,a);
	return 0;
}