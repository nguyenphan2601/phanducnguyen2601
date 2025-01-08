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
	cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			a[j]=a[i];
			j++;
		}
	}
	cout<<"\nmang hoan thien cua ban la:\n";
	for(int i=0;i<j;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}