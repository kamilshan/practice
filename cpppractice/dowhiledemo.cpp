#include <iostream>
using namespace std;
int main()
{ 
    long dividend,divisor;
    char ch;
    do 
    {
        cout<<"enter the dividend"; 
        cin>>dividend;
        cout<<"enter the divisor";
        cin>>divisor;
        cout<<"quotient is:"<<dividend/divisor;
        cout<<"remainder is :"<<dividend%divisor;
        cout<<"\n do another ? (y/n)";
        cin>>ch;
    }
    while(ch!='n');
    return  0;

}