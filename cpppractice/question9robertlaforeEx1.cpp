#include "iostream"
using namespace std;
int main()
{ 
    float a,b,c,d;
    cout<<"enter your  (a) ";
    cin>>a;

    cout<<"enter your operator (/)"
    cout<<"enter your  (b) ";
    cin>>b;
    cout<<"enter your number (c) ";
    cin>>c;
    cout<<"enter your number (d) ";

    cin>>d;


    
    float sum=((a*d)+(b*c))/(b*d);
    cout<<"sum is: "<<sum;
    return 0;
}