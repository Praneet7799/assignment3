#include <iostream>
using namespace std;

int main() {
            int a=0,b=1,c,n,i;
            cout<<"enter a positive number\n";
            cin>>n;
            cout<<"the fibonacii series is \n";
           
            for(i=1;i<=n;i++)
            {          
                   cout<<"\n"<<a;
                   c=a+b;
                   a=b;
                   b=c;	
            }
            
	return 0;
}