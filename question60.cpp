#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c=0,i=0,dec=0,oct=0;
	cout<<" Enter the binary number ";
	cin>>a;
	while(a>0)
	{b=a%10;
	a=a/10;
	dec=dec+pow(2,i)*b;
	i++;
	}
i=1;
	while(dec!=0)
    {
    	a=dec%8;
    	dec=dec/8;
    	oct=oct+a*i;
    	i=i*10;
    }
cout<<"\n The octal equivalent is "<<oct;
	return 0;

}
