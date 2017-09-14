#include <iostream>

using namespace std;

int main() {
    int dec,a,i=1,n,temp;
    char hex[100],b;
    cout<<"Enter the decimal number ";
    cin>>dec;
    temp=dec;
    while(temp!=0)
    {temp=temp/16;
    i++;}
    n=i;
    while(dec!=0)
    {
    	a=dec%16;
    	dec=dec/16;
    	switch(a)
    	{case 1:b='1';break;
    	case 2:b='2';break;
    	case 3:b='3';break;
    	case 4:b='4';break;
    	case 5:b='5';break;
    	case 6:b='6';break;
    	case 7:b='7';break;
    	case 8:b='8';break;
    	case 9:b='9';break;
    	case 10:b='A';break;
    	case 11:b='B';break;
    	case 12:b='C';break;
    	case 13:b='D';break;
    	case 14:b='E';break;
    	case 15:b='F';break;
    	default:break;
    	}
    	hex[i]=b;
    	i--;
    }
    for(i=0;i<=n;i++)
    {cout<<hex[i];}
    
    
	return 0;
}
