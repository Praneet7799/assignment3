#include <iostream>
using namespace std;

int main() {
	int n,i,l,f,s;
	cout<<"enter a number\n";
	cin>>n;
	l=n%10;
	while(n>10)
	{
		f=n%10;
           n=n/10;
		
	}
	s=l+f;
	cout<<"the sum of the first and last digit is "<<s;
	return 0;
}