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
/*void maxminall(int m,int a[50][50]){
	int c=a[0][0],b=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			c=max(c,a[i][j]);
			b=min(b,a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==c)
			cout<<"Gia tri lon nhat cua mang la: "<<c<<" o vi tri ("<<i<<","<<j<<")\n";
			if(a[i][j]==b)
			cout<<"Gia tri nho nhat cua mang la: "<<b<<" o vi tri ("<<i<<","<<j<<")\n";
		}
	}
}
*/
void maxmin(int n,int m,int a[50][50]){
	int s=a[0][n],d=a[0][n];
	for(int i=0;i<m;i++){
		s=max(s,a[i][n]);
		d=min(d,a[i][n]);
	}
	for(int i=0;i<m;i++){
		if(a[i][n]==s)
			cout<<"Gia tri lon nhat cua cot "<<n<<" la: "<<s<<" o vi tri "<<i<<"\n";
			if(a[i][n]==d)
			cout<<"Gia tri nho nhat cua cot"<<n<<" la: "<<d<<" o vi tri "<<i<<"\n";
	}
}
void maxmincc(int m,int a[50][50]){
	int c=a[0][0],b=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(i==j){
				c=max(c,a[i][j]);
			    b=min(b,a[i][j]);
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==c)
			cout<<"Gia tri lon nhat cua dcd la: "<<c<<" o vi tri ("<<i<<","<<j<<")\n";
			if(a[i][j]==b)
			cout<<"Gia tri nho nhat cua dcd la: "<<b<<" o vi tri ("<<i<<","<<j<<")\n";
		}
	}
}
int main(){
	int n,a[50][50];
	nhapsl(n);
	cout<<"nhap vao mang cua ban :\n";
	nhap(n,a);
	cout<<"mang cua ban la:\n";
	xuat(n,a);
//	cout<<"Gia tri max min cua ca mang la:\n";
//	maxminall(n,a);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"cot "<<i<<" co :\n";
		maxmin(i,n,a);
	}
	cout<<"duong cheo chinh:\n";
	maxmincc(n,a);
	return 0;
}