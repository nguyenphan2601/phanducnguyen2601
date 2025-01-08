#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,s;
	do{
		cout<<"nhap vao so nguyen duong n: ";cin>>n;
	}while(n<=0);
	cout<<"Cac so chinh phuong trong khoang 0 den "<<n<<" la :\n";
	for(int i=0;i<sqrt(n);i++){
		s=pow(i,2);
		if(s<n)
		cout<<s<<"	";
	}
	return 0;
}