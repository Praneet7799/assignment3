#include <iostream>
using namespace std;

int main() {
	int n,num,r,rev;
	cout<<"enter a number\n";
	cin>>n;
	num=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(num==rev)
	    cout<<"the number is pallindromic";
	else
	    cout<<"the number is not pallindromic";
	return 0;
}
