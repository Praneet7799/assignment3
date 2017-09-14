#include<iostream>
using namespace std;
int main()
{
   int mn;
   cout<<"enter a month number\n";
   cin>>mn;
   if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
   {
     cout<<"the number of days in "<<mn<<" month is 31";
   }
   else if(mn==4||mn==6||mn==9||mn==11)
   { 
     cout<<"the number of days in "<<mn<<" month is 30";
   }
   else if(mn==2)
   { 
     cout<<"the month has 28 or 29 days";
   }
   else
   {
     cout<<"invalid month number";
   }
   return 0;
}

