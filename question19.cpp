#include<iostream>
using namespace std;
int main()
{
   int p,c,b,m,co;
   float per;
   cout<<"enter marks of five subjects-physics,chemistry,biology,mathematics,computer\n";
   cin>>p>>c>>b>>m>>co;
   per=((p+c+b+m+co)*100)/500;
   if(per>=90)
     cout<<"GRADE A";
   else if(per>=80)
     cout<<"GRADE B";
   else if(per>=70)
     cout<<"GRADE C";
   else if(per>=60)
     cout<<"GRADE D";
   else if(per>=40)
     cout<<"GRADE E";
   else
     cout<<"GRADE F";
   return 0;
} 
