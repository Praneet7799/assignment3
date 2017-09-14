#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
    int i=0,b,dec,c;
    char ch,hex[100];
    cout<<"Enter the hexadecimal number ";
    cin>>hex;
    c=strlen(hex);
    c=c-1;
    while(c>=0)
    {ch=hex[i];
    switch(ch)
{       case '1':b=1;break;
    	case '2':b=2;break;
    	case '3':b=3;break;
    	case '4':b=4;break;
    	case '5':b=5;break;
    	case '6':b=6;break;
    	case '7':b=7;break;
    	case '8':b=8;break;
    	case '9':b=9;break;
    	case 'A':b=10;break;
    	case 'B':b=11;break;
    	case 'C':b=12;break;
    	case 'D':b=13;break;
    	case 'E':b=14;break;
        case 'F':b=15;break;
    	default:break;
}
i++;
dec=dec+b*pow(16,c);
c--;} 
   int oct=0,a;
i=1;

    while(dec!=0)
    {
    	a=dec%8;
    	dec=dec/8;
    	oct=oct+a*i;
    	i=i*10;
    }
cout<<"\n The octal equivalent is "<<oct;
	return 0;

}

