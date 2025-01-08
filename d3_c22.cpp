#include<iostream>
#include<math.h>
using namespace std;
void nhapsl(int &m){
	do{
		cout<<"Nhap lan luot so hang so cot ma tran vuong A: \n";cin>>m;
	}while(m<=0||m>=50);
}
void nhap(int m, int a[50][50]){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"] = ";cin>>a[i][j];
		}
	}
}
void xuat(int m, int a[50][50]){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"  ";
		}cout<<endl;
	}
}
int timsnt(int m){
	int dem=0,dem2=0;
	for(int i=1;i<=sqrt(m);i++){
		if(m%i==0)
		{
			dem++;
		}
//		if(dem==0||dem==1){
//			dem2++;
//		}else
//		dem2 =0;
	}
	return dem;
}
int snt(int m,int a[50][50]){
	int cc,dem1=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cc=a[i][j];
//			cout<<timsnt(cc)<<endl;
			if(timsnt(cc)==0||timsnt(cc)==1){
				
				dem1++;
			}
		}
	}
	return dem1;
}
int main(){
	int n,a[50][50];
	nhapsl(n);
	cout<<"nhap vao mang cua ban :\n";
	nhap(n,a);
	cout<<"mang cua ban la:\n";
	xuat(n,a);
	cout<<endl<<"mang co "<<snt(n,a)<<"so nguyen to";
}