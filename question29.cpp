#include <iostream>
using namespace std;

int main() {
	int n,s=0,i;
	cout<<"enter n natural number\n";
	cin>>n;
	i=1;
	while(i<=n)
	{
		s=s+i;
		i=i+2;
	}
	cout<<"the sum of all odd numbers is ="<<s;
	return 0;
}