#include<math.h>
#include<iostream>
using namespace std;
void nhap(int n,int a[50]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
}
void xuat(int n,int a[50]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void xapsep(int n,int a[50],int temp){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int n,a[50],temp;
	do{
		cout<<"nhap vao n: ";cin>>n;
	}while(n<=0||n>50);
	cout<<"nhap vao mang cua ban :\n";
	nhap(n,a);
	cout<<"mang cua ban la:\n";
	xuat(n,a);
	xapsep(n,a,temp);
	cout<<"mang theo thu tu tu giam dan la:\n";
	xuat(n,a);
	return 0;
	}