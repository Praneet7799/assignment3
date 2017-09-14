#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float a,b,c,x1,x2,d,real,img;
  cout<<"enter the co-efficients of a,b,c of quadratic equation";
  cin>>a>>b>>c;
  d=(b*b)-4*a*c;
  if(d>0)
  {
    cout<<"\nthe roots are real";
    x1=(-b+pow(d,0.5))/2*a;
    x2=(-b-pow(d,0.5))/2*a;
    cout<<"the two different real roots are"<<"\n"<<x1<<"\n"<<x2;
  }
  else if(d==0)
  {
   cout<<"\nthe roots are real and same";
   x1=-b/2*a;
   cout<<"the two same real roots are"<<"\n"<<x1;
  }
  else
  {
    cout<<"the roots are imaginary\n";
    real=-b/2*a;
    img=pow(-d,0.5)/2*a;
    cout<<"x1"<<" is"<<real<<'+'<<img;
    cout<<"\n"<<"x2"<< "is"<<real<<'-'<<img;
  }
  return 0;
}
