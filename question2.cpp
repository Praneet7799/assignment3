#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter any three numbers \n";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    { 
      cout<<"the maximum of three numbers is-"<<a;
    }
    else if(b>c&&b>a)
    {
      cout<<"the maximum of three numbers is-"<<b;
    }
    else
    {
      cout<<"the maximum of three numbers is-"<<c;
    }
    return 0;
}
