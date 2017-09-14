#include<iostream>
#include<cmath>
using namespace std;

int main() {
            int a,b,lcm,cf,i;
            cout<<"enter two numbers\n";
            cin>>a>>b;
            for(i=1;i<=a && i<=b;i++)
            {
            	if((a%i==0)&&(b%i==0))
            	    cf=i;
            }
            lcm=(a*b)/cf;
            cout<<"lcm of two numbers is "<<lcm;
            return 0;
            
}            
            