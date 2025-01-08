#include<iostream>
using namespace std;
int main(){
	int i,n=0;
	cout<<"cac so chi het cho 3 va 7 trong doan 1 den 100 la\n";
	for(i=1;i<=100;i++){
		if(i%3==0&&i%7==0){
			n++;
			cout<<n<<": "<<i<<endl;
		}
	}
	return 0;
}