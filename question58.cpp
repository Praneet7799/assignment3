#include <iostream>
using namespace std;

int main() {
   
  int bin,rev=0,r,d;
  cout<<"enter a binary number\n";
  cin>>bin;
  while(bin>0)
  {
    r=bin%10;
    rev=(rev*10)+r;
    bin=bin/10;
  }
  while(rev!=0)
  {
     d=rev%10;
     if(d==1)
        cout<<'0';
     else
        cout<<'1';
     rev=rev/10;
        
  }
  

    return 0;
}