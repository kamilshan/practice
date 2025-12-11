#include <iostream>
using namespace std;
class demo 
{
    int id;
    float salary;

    public:
    void get(int i,float s)
    {
        id=i;
        salary=s;
        cout<<"enter id and salary"<<endl;
        cin>>id>>salary;


    }
    void display()
    {
        cout<<"id="<<id<<endl;
        cout<<"salary="<<salary<<endl;
    
    }
};
int main()
{
    demo obj;
    obj.get();
    obj.display();
    return 0;
};
