#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, a[50];
	do{
		cout<<"nhap vao phan tu thu n: ";cin>>n;
	}while(n<=0||n>50);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	int k=a[0];
	cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	for(int i=0;i<n;i++){
		k = min(k,a[i]);
	}
	cout<<endl<<"gia tri nho nhat trong mang la:"<<k;
	return 0;
}