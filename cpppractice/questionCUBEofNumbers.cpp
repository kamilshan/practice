#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numb;
    
    int i =1;
    for (;i<=10;)
    {
        cout<<setw(4)<<numb;
        int cube=numb*numb*numb;
        cout<<setw(6)<<cube<<endl;
i++;

    }
return 0;
}