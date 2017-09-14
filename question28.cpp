#include <iostream>
using namespace std;

int main()
{

	int n,s=0,i;
	cout<<"enter n natural number\n";
	cin>>n;
	i=2;
	while(i<=n)
	{
		s=s+i;
		i=i+2;
	}
	cout<<"the sum of all even numbers is ="<<s;
	return 0;
}