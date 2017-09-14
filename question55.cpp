#include <iostream>
using namespace std;

int main() {
    int n,num,i,j,r,fact,s=0;
    cout<<"enter a number\n";
    cin>>n;
    num=n;
    for(i=1;i<=n;i++)
    {
    	fact=1;
    	r=n%10;
    	for(j=1;j<=r;j++)
    	{
    		fact=fact*j;
    	}
    	s=s+fact;
    	n=n/10;
    }
    if(s==num)
       cout<<"the number is "<<n<<" strong";
    else 
        cout<<"the number is "<<n<<" is not strong";
	return 0;
}