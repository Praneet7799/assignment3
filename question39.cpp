#include <iostream>
using namespace std;

int main() {

	long n,num,r,c;
	cout<<"Enter the number ";
	cin>>n;
	for(int i=0;i<10;i++)
	{c=0;
	num=n;
		while(num>0)
		{r=num%10;
	num=num/10;
	if(r==i)
	{c++;}}
	cout<<"\n"<<i<<" comes "<<c<<" times in "<<n<< " number ";
	}
	
	return 0;
}


