#include<iostream>
using namespace std;
int main()
{
	int ftemp;
	cout<<"enter temperature in fahrenheit";
	cin>>ftemp;
	int ctemp=(ftemp-32)*5/9;
	cout <<"equilavent in celsius is:" <<ctemp<< '\n';
	return 0;
}