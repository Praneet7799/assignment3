#include<iostream>
using namespace std;
int main()
{
  float cp,sp,p,l;
  cout<<"enter the cost price and selling price of a commodity\n";
  cin>>cp>>sp;
  if(cp>sp)
  { 
    l=cp-sp;
    cout<<"loss is "<<l;
  }
  else if(cp<sp)
  {
    p=sp-cp;
    cout<<"profit is "<<p;
  }
  return 0;
}
