#include<iostream>
#include<cmath>
using namespace std;

int main() {
            int n,i,f,c=0;
            cout<<"enter a number\n";
            cin>>n;
            
            for(i=2;i<n;i++)
            {
            	f=n%i;
            	if(f==0)
            	{
                           c=1;
                           break;
            	}
           
            }
            if(c==0)
               cout<<"the number is prime";
            else
               cout<<"the number is not prime";
            return 0;
            
}            
            