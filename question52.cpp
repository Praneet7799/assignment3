#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int n,num,i,j,r,arm;
     cout<<"enter n  numbers\n";
     cin>>n;
     for(i=1;i<=n;i++)
     { 
       num=i;
       while(i!=0)       
       {
          r=i%10;
          arm=arm+pow(r,3);
          i=i/10;
       }
       if(num==arm)
          cout<<num<<" ";
     }
     return 0;
}
