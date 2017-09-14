#include<iostream>
#include<cmath>
using namespace std;

int main() {
            int n,i,fac=1;
            cout<<"enter a number\n";
            cin>>n;
            for(i=1;i<=n;i++)
            {
            	fac=fac*i;
            }
            cout<<"factorial of "<<n<<" is "<<fac;
            return 0;
            
}            
            