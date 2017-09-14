#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n,i,p=1,e;
	cout<<"enter a number and exponent\n";
	cin>>n>>e;
	for(i=1;i<=e;i++)
	{
		p=p*n;
	}
	cout<<"the power a number is" <<p;
	
	return 0;
}