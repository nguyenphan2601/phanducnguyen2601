#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	double s=0;
	do{
		cout<<"Nhap va so nguyen n: ";cin>>n;
	}while(n<=0);
	for(int i=1;i<=n;i++){
		s=s+1.0*(2*i+1)/(i*(i+1));
	}
	cout<<"gtri bieu thuc la "<<s;
	return 0;
}