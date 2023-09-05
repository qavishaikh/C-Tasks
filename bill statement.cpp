#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int rate1=5, rate2=10, units,bill;
	cout<<"Enter Units Consumed By Clint "<<endl;
	cin>>units;
	if(units<=250)
	{
		bill=units*rate1;
		cout<<"Total Bill Is  "<<bill<<endl;		
	}
	else
	{
		bill=units*rate2;
		cout<<"Total Bill Is  "<<bill<<endl;
	}
	cout<<"M Hamdan ";
	return 0;
}

