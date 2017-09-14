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
int dec,bin=0;
i=1;
    dec=c;
    while(dec!=0)
    {
    	a=dec%2;
    	dec=dec/2;
    	bin=bin+a*i;
    	i=i*10;
    }
    cout<<"\n The binary equivalent is "<<bin;
    
	return 0;
}
