#include <iostream>
using namespace std;

int main() 
{
    int n,num,i,r,k,fact,s;
    cout<<"enter a number\n";
    cin>>n;
    cout<<"the strong numbers are ";
    for(i=1;i<=n;i++)
    {
          s=0;
          num=i;
          while(num>0)
          {
    	             fact=1;
                  r=num%10;
    	             for(k=1;k<=r;k++)
    	             {
                     fact=fact*k;
    	             }
                  s=s+fact;
    	            num=num/10;
          }
          if(s==i)
              cout<<i<<" ";
    }
         return 0;
}