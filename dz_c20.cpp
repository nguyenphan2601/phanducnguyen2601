#include<iostream>
using namespace std;
void nhapsl(int &n,int &m){
	do{
		cout<<"Nhap lan luot so hang so cot ma tran A: \n";cin>>m>>n;
	}while(n<=0||m<=0||n>=50||m>=50);
}
void nhap(int n,int m, int a[50][50]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"] = ";cin>>a[i][j];
		}
	}
}
void xuat(int n,int m, int a[50][50]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"  ";
		}cout<<endl;
	}
}
int tong(int n,int m,int a[50][50]){
	int s=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			s+=a[i][j];
		}
	}
	return s;
}
int tongchan(int n,int m,int a[50][50]){
	int s=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==0)
			s+=a[i][j];
		}
	}
	return s;
}
int tongle(int n,int m,int a[50][50]){
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2!=0)
			tong +=a[i][j];
		}
	}
	return tong;
}
int main(){
	int n,m,a[50][50];
	nhapsl(n,m);
	cout<<"nhap vao so luong phan tu trong mang:\n";
	nhap(n,m,a);
	cout<<"mang cua ban la:\n";
	xuat(n,m,a);
	cout<<"tong cac pt trong mang: "<<tong(n,m,a)<<endl;
	cout<<"tong cac pt chan trong mang: "<<tongchan(n,m,a)<<endl;
	cout<<"tong cac pt le trong mang: "<<tongle(n,m,a);
	return 0;
}