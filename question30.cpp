#include <iostream>
using namespace std;

int main() {
	int n,i,m;
	cout<<"enter any number\n";
	cin>>n;
	i=1;
	while(i<=10)
	{
	  m=n*i;
	  cout<<n<<'*'<<i<<'='<<m<<"\n";
	  i++;
	}
	return 0;
}