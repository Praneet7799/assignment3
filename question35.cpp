#include <iostream>
using namespace std;

int main() {
	int n,f,s;
	cout<<"enter a number\n";
	cin>>n;
	
	while(n>0)
	{
		f=n%10;
		n=n/10;
		s=s+f;
	            
	}
	cout<<"sum of the digits is "<<s;

}	