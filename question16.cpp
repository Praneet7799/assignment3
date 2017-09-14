#include<iostream>
using namespace std;
int main()
{
   float a,b,c;
   cout<<"enter three sides of a triangle\n";
   cin>>a>>b>>c;
   if(a==b&&b==c)
     cout<<"the given triangle is equilateral";
   else if(a==b||b==c||a==c)
     cout<<"the given triangle is isoceles";
   else
     cout<<"the given triangle is scalene";
   return 0;
}
