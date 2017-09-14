#include<iostream>
using namespace std;
int main()
{
    int n,j,i,s;
    cout<<"enter n  numbers\n";
    cin>>n;
    cout<<"the pefect numbers -";
    for(i=1;i<=n;i++)
    {
       s=0;
       for(j=1;j<i;j++)
       {
           if(i%j==0)
              s=s+j;
       }
       if(s==i)
          cout<<i<<" ";
    }
    return 0;
}
