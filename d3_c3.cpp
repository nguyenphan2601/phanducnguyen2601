#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,s=0;
	do{
		cout<<"nhap vao so nguyen n: ";cin>>n;
	}while(n<=0);
	int a[n],m;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	for(int i=0;i<n;i++){
		m=max(m,a[i]);
	}cout<<"gia tri lon nhat trong day la: "<<m<<endl;
	for(int i=0;i<n;i++){
		if(a[i]==m)
		s++;
	}cout<<"trong mang co "<<s<<" phan tu co gia tri bang gia tri lon nhat trong day";
	return 0;
}