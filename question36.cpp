#include <iostream>
using namespace std;

int main() {
	int n,f,p=1;
	cout<<"enter a number\n";
	cin>>n;
	
	while(n>0)
	{
		f=n%10;
		n=n/10;
		p=p*f;
	            
	}
	cout<<"product of the digits is "<<p;

}	