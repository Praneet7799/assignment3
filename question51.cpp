#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int n,num,i,r,arm;
     cout<<"enter a number\n";
     cin>>n;
     num=n;
     for(i=1;i<=n;i++)
     {
       r=n%10;
       arm=arm+pow(r,3);
       n=n/10;
     }
     if(num==arm)
       cout<<"the number "<<num<<" is armstrong";
     else
       cout<<"the number "<<num<<" is not armstrong";
     return 0;
}
