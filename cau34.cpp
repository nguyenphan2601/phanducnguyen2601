#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap vao so nguyen duong n: ";cin>>n;
	}while(n<=0);
	cout<<"Uoc so cua "<<n<<" la:\n";
	for(int i=1;i<=n/2;i++){
		if(n%i==0)
		cout<<i<<"	";
	}cout<<n;
	return 0;
}