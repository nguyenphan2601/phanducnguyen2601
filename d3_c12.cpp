#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
	int n, a[50];
	do{
		cout<<"nhap vao phan tu thu n: ";cin>>n;
	}while(n<=0||n>50);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	int k=a[0],m=n;
	cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	
	for(int i=0;i<n;i++){
		k=max(k,a[i]);
	}
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]!=k){
			a[j]=a[i];
			j++;
		}
	}
cout<<"mang cua ban la:\n";
	for(int i=0;i<j;i++){
		cout<<a[i]<<"  ";
	}    
}