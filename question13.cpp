#include<iostream>
using namespace std;
int main()
{
  int amt,fh,h,fy,ty,tn,f;
  cout<<"enter the amount\n";
  cin>>amt;
  while(amt>=500)
  {
    fh=amt/500;
    amt=amt%500;
    cout<<"the number of 500 notes is"<<fh<<endl;
    
  }
  while(amt>=100)
  {
    h=amt/100;
    amt=amt%100;
    cout<<"the number of 100 notes is"<<h<<endl;
  }
    while(amt>=50)
  {
    fy=amt/50;
    amt=amt%50;
    cout<<"the number of 50 notes is"<<fy<<endl;
    
  }
   while(amt>=20)
  {
    ty=amt/20;
    amt=amt%20;
    cout<<"the number of 20 notes is"<<ty<<endl;
    
  }
  while(amt>=10)
  {                      
    tn=amt/10;
    amt=amt%10;
    cout<<"the number of 10 notes is"<<tn<<endl;
    
  }
   while(amt>=5)
  {
    f=amt/5;
    amt=amt%5;
    cout<<"the number of 5 notes is"<<f<<endl;
    
  }
  return 0;
}


