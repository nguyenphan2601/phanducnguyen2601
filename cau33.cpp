#include<iostream>
using namespace std;
int main(){
	cout<<"cac so le nho hon 100 tru 7,49,53 la:\n";
	for(int i=0;i<100;i++)
	{
		if(i%2!=0&&i!=7&&i!=49&&i!=53)
		cout<<i<<"  ";
	}
	return 0;
}