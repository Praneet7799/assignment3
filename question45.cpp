#include<iostream>
using namespace std;

int main() {
            int a,b,i,hcf;
            cout<<"enter two numbers\n";
           
            cin>>a>>b;
            for(i=a;i>0;i--)
            {
               if(a%i==0&&b%i==0)
               {      hcf=i;
                     cout<<"hcf of two numbers is "<<hcf;
                     break;
               }
            }
            return 0;
            
}            
            
