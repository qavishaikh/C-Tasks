#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"\n\t\tWELCOME TO IF ELSE CALCULATOR\n\n";
	cout<<"\tEnter The First Numbers\n";
	cin>>a;
	cout<<"\tEnter The Second Number\n";
	cin>>b;
	cout<<"\tEnter your Choice \n \t1.Addidion +\n\t2.Subtraction -";
	cout<<"\n\t3.Multiplication x\n\t4.Division /\n\t5.Modulos %\n\n";
	cin>>ch;
	if (ch == 1)
	{
		cout<<"Answe =  "<<a+b;
	}
      else if (ch == 2)
	{
		cout<<"Answer =  "<<a-b;
	}
	else if(ch == 3)
	{
		cout<<"Answer =  "<<a*b;
	}
	else if(ch == 4)
	{
		cout<<"Answer =  "<<a/b;
	}
	else if(ch == 5)
	{
		cout<<"Answer =  "<<a%b;
	}
	else {
		cout<<"\t\tWrong Choice! \n\t\t Please try Again.......  ";
	}
	cout<<"\t\n\n Make By : Muhammad Qavi Sheikh";
	getch();
	return 0;
 } 
 
