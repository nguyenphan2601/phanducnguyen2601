#include<iostream>
using namespace std;
int main(){
	int n,a[50],k;
	do{
		cout<<"nhap n: ";cin>>n;
	}while(n<=0||n>50);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl<<"nhap phan tu can xoa: ";cin>>k;
	if(k>=n){
		cout<<"thu tu xoa khong hop le\n";
	}else{
		for(int i=0;i<=k;i++){
			if(i==k){
				for(int j=i;j<n;j++){
					a[j]=a[j+1];
				}	
			}
		}
		for(int i=0;i<n-1;i++){
			cout<<a[i]<<"  ";
		}
	}
	return 0;
}
