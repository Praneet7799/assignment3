#include <iostream>
using namespace std;

int main() 
{
	int bs; float hra,da,gs;
	cout<<"enter your basic salary\n";
	cin>>bs;
	if(bs<=10000)
	{
		hra=(20*bs)/100;
		da=(80*bs)/100;
		gs=bs+hra+da;
		cout<<"the gross salary is "<<gs;
	}
	else if(bs<=20000)
            {
		hra=(25*bs)/100;
		da=(90*bs)/100;
		gs=bs+hra+da;
		cout<<"the gross salary is "<<gs;
	}
	else if(bs>20000)
            {
		hra=(30*bs)/100;
		da=(95*bs)/100;
		gs=bs+hra+da;
		cout<<"the gross salary is "<<gs;
	}
	
	
	return 0;
}