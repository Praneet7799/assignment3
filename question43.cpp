#include<iostream>
#include<cmath>
using namespace std;

int main() {
            int n,i,f;
            cout<<"enter a number\n";
            cin>>n;
            cout<<"the factors of "<<n<<" are\n";
            for(i=1;i<=n;i++)
            {
            	f=n%i;
            	if(f==0)
            	  cout<<i<<"\n";
            }
}