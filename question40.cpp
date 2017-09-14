#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int n,rev=0,r,d;
  cout<<"enter a number\n";
  cin>>n;
  while(n>0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  while(rev!=0)
  {
   d=rev%10;
   switch(d)
   {
     case 0:
     cout<<"zero ";
     break;
     
     case 1:
     cout<<"one ";
     break;
     
     case 2:
     cout<<"two ";
     break;
  
     case 3:
     cout<<"three ";
     break;
 
     case 4:
     cout<<"four ";
     break;

     case 5:
     cout<<"five ";
     break;
   
     case 6:
     cout<<"six ";
     break;
  
     case 7:
     cout<<"seven ";
     break;
    
     case 8:
     cout<<"eight ";
     break;
   
     case 9:
     cout<<"nine ";
     break;
 
    }
    rev=rev/10;
   }

	return 0;
}