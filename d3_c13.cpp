#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, a[50],c,dem=0,x;
	do{
		cout<<"nhap vao phan tu thu n: ";cin>>n;
	}while(n<=0||n>50);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl<<"nhap vao so nguyen X: ";cin>>x;
	cout<<"Vi tri xuat hien cua X trong mang la: ";
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cout<<i<<" ";
			dem++;
		}
	}
	if(dem==0)
	cout<<"\nkhong x trong mang ";
	cout<<"\nSap xep mang theo chieu giam dan la:\n";
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	return 0;
}