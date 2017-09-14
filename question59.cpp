#include <iostream>

#include <cmath>

using namespace std;



int main() {

	int n,r,p=0,bin,i=0,a,k[100];

	cout<<" Enter the binary number ";

	cin>>bin;

	n=bin;

	while(n>0)

	{
		r=n%10;
		p=p+pow(2,i)*r;
                       	n=n/10;
            	i++;

	}

	bin=pow(2,i)-p;
            cout<<"\n The 2's compliment of the number is ";
            i=0;
            while(bin>0)
            {
            	a=bin%2;
                        k[i]=a;
                        i++;
                        bin=bin/2;}
            for(int j=i-1;j>=0;j--)
            {
                  cout<<k[j];
            }


	return 0;

}
