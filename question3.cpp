#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"enter a number\n";
    cin>>a;
    if(a>0)
    { 
      cout<<a<<" the number is positive";
    }
    else if(a<0)
    {
      cout<<a<<" the number is negative";
    }
    else
    {
      cout<<a<<" is zero";
    }
    return 0;
}
