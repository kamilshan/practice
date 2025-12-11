//casts signed and unsigned integers
#include<iostream>
using namespace std;
int main(){
    int intvar= 1500000000; //1,500,000,000

    intvar=(intvar*10)/10;//result too large
    cout<<"intvar="<<intvar<<endl; //worng answer
    intvar=1500000000; //cast to double
    intvar=(static_cast<double>(intvar)*10)/10;
    cout<<"intvar="<<intvar<<endl; //right answer
    return 0;
}