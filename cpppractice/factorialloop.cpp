#include <iostream>
using namespace std;
int main()
{
    unsigned int numb;
    unsigned long fact=1;
cout<<"enter your numb";
cin>>numb;


    for(int i=numb;i>0;i--)
    {
fact *=i;
    }
    cout<<"your factorial is:"<<fact;
    return 0;
}