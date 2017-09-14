#include <iostream>
using namespace std;

int main() {
	int n,l,f;
	cout<<"enter a number\n";
	cin>>n;
	l=n%10;
	while(n>0)
	{
		f=n%10;
		n=n/10;
	}
	cout<<"the first digit in a given number is "<<f<<"\n"<<"the last digit is "<<l;
	return 0;
}