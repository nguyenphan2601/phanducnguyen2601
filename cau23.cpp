#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"nhap vao so nguyen duong n ";cin>>n;
	}while(n<=0);
	cout<<"day cac so chia het cho 3 trong khoang "<<n<<" den "<<2*n<<" la:\n";
	for(int i=n+1;i<2*n;i++){
		if(i%3==0)
		cout<<i<<" ";
	}
	return 0;
}