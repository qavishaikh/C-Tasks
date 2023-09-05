#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	float a,b,PI;
	int c;
	cout<<endl;
	cout<<"\t\t************ SCIENTIFIC CALCULATOR *************\n";
	cout<<"Operations\t"<<"\tTrigonometric Functions";
	cout<<"\t\tLogarithmic Functions\n\n";
	cout<<"1.Division\t\t"<<"7.Sin\t\t"<<"\t\t13.Log"<<endl;
	cout<<"2.Multiplication\t"<<"8.Cos\t\t"<<"\t\t14.Log With Base 10\n";
	cout<<"3.Subtraction\t\t"<<"9.Tan\t\t"<<endl;
	cout<<"4.Addition\t\t"<<"10.Inverse Of Sin"<<endl;
	cout<<"5.Exponent\t\t"<<"11.Inverse Of Cos"<<endl;
	cout<<"6.SqureRoot\t\t"<<"12.Inverse Of Tan"<<endl;
	cout<<"\n\n\tEnter The Function Thet You Want To Perform : "<<endl;
	cin>>c;
	PI=3.14159265;
	switch(c)
	{
		case 1:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Enter Second Number\n";
			cin>>b;
			cout<<"\tDivision = "<<a/b<<endl;
			break;
			case 2:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Enter Second Number\n";
			cin>>b;
			cout<<"\tMultiplication = "<<a*b<<endl;
			break;
			case 3:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Enter Second Number\n";
			cin>>b;
			cout<<"\tSubtraction = "<<a-b<<endl;
			break;
			case 4:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Enter Second Number\n";
			cin>>b;
			cout<<"\tAddition = "<<a+b<<endl;
			break;
			case 5:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Enter Exponent\n";
			cin>>b;
			cout<<"\tExponent = "<<pow(a,b)<<endl;
			break;
			case 6:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Squre Root\n";
			cin>>b;
			cout<<"\tSqure Root = "<<sqrt(a)<<endl;
			break;
			case 7:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"\tSin = "<<sin(a)<<endl;
			break;
			case 8:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Cos\n";
			cin>>b;
			cout<<"\tCos = "<<cos(a)<<endl;
			break;
			case 9:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Tan\n";
			cin>>b;
			cout<<"\tTan = "<<tan(a)<<endl;
			break;
			case 10:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Inverse Of Sin\n";
			cin>>b;
			cout<<"\tIverse Of Sin = "<<asin(a)*180.0/PI<<endl;
			break;
			case 11:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Inverse Of Cos\n";
			cin>>b;
			cout<<"\tInverse Of Cos = "<<acos(a)*180.0/PI<<endl;
			break;
			case 12:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Inverse Of Tan\n";
			cin>>b;
			cout<<"\tInverse Of Tan = "<<atan(a)*180.0/PI<<endl;
			break;
			case 13:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Log\n";
			cin>>b;
			cout<<"\tLog = "<<log(a)<<endl;
			break;case 14:
			cout<<"   Enter First Number\n";
			cin>>a;
			cout<<"   Log With Base 10\n";
			cin>>b;
			cout<<"\tLog With Base 10 = "<<log10(a)<<endl;
			break;
			default:
				cout<<"\n\t\tINVALID CHOICE! PLEASE TRY AGAIN......";	
      }
	 cout<<"\n\n\t\tMake By : Muhammad Qavi Sheikh";	
	getch();
	return 0;
}

