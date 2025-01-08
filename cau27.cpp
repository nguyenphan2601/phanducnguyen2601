#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	double s=0;
	do{
		cout<<"nhap vao so nguyen n: ";cin>>n;
	}while(n<=0);
	for(int i=1;i<=n;i++)
	s=s+1.0*1/(i*(i+1));
	cout<<"gti bieu thuc la :"<<s;
	return 0;
}