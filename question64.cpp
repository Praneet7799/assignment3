#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c=0,d,i=0;
	cout<<" Enter the octal number ";
	cin>>d;
	a=d;
	while(a>0)
	{b=a%10;
	a=a/10;
	c=c+pow(8,i)*b;
	i++;
	}
	cout<<" \n The decimal equivalent is "<<c;
	return 0;
}

