#include<iostream>
using namespace std;
int main(){
	int n, a[50],k,m;
	do{
		cout<<"nhap vao phan tu thu n: ";cin>>n;
	}while(n<=0||n>50);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}cout<<"mang cua ban la:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl<<"nhap thu tu can chen phan tu: ";cin>>k;
	cout<<"so can chen la: ";cin>>m;
	if(k>=0&&k<=n){
		for(int i=0;i<=k;i++){
			if(i==k){
				for(int j=n+1;j>k;j--){
					a[j]=a[j-1];
				}
				a[k]=m;
			}
		}
		cout<<"mang cua ban la:\n";
	for(int i=0;i<n+1;i++){
		cout<<a[i]<<"  ";
	}
}else
	cout<<"\nvitri k khong hop le";
	return 0;
}