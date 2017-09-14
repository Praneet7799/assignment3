#include<iostream>
using namespace std;
int main()
{
    int n,f,k,i,j,c;
    cout<<"enter a number\n";
    cin>>n;
    cout<<"the prime factors of "<<n<<" =";
    for(i=2;i<=n;i++)
    { 
      if(n%i==0)
      {  
         
         
            c=0;
            for(j=2;j<=i/2;j++)
            {  
              f=i%j;
              if(f==0)
              {
               c=1;
               break;
              } 
             }
             if(c==0&&i!=1)
	            cout<<i<<" ";
         
       }
    }
    return 0;
}
