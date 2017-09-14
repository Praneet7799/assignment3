#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<n;i++)
    {
       if(n%i==0)
         s=s+i;
    }
    if(s==n)
       cout<<"the number "<<n<<"  is perfect";
    else
       cout<<"the number "<<n<<" is not perfect";
    return 0;
}
