#include <iostream>
using namespace std;

int main() {
    int unit=0,amt=0,surch=0,tot=0;
    cout<<"enter the units of electricity consumed";
    cin>>unit;
    if(unit<=50)
        amt=unit*0.50;
    else if(unit<=150)
        amt=25+((unit-50)*0.75);
    else if(unit<=250)
        amt=100+((unit-150)*1.2);
    else
        amt=220+((unit-2500)*1.5);
    surch=amt*0.2;
    tot=amt+surch;
    cout<<"electricity bill is "<<tot;
    return 0;
}