// this programes calclulates the fourth power of the natural numbers 
#include <iostream>

#include <iomanip> // for setw
using namespace std;
int main()
{
    int pow=1;
    int num=1;
    while(pow<10000)
    { 
        cout<<setw(3)<<num;
        cout<<setw(5)<<pow<<endl;
        num++;
        pow=num*num*num*num;
        cout<<endl;



    } 
    return 0;


}
