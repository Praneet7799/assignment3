#include<iostream>
using namespace std;
int main()
{
  float a,b,c,s;
  cout<<"enter three angles of a triangle\n";
  cin>>a>>b>>c;
  s=a+b+c;
  if(s==180)
  { 
    cout<<"the given triangle is valid";
  }
  else
  {
    cout<<"not a triangle";
  }
  return 0;
}
