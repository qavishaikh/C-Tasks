#include<iostream>
using namespace std;
main()
{
	char c;
	cout<<"Enter A Character ";
	cin>>c;
	if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
	cout<<c<<"\n It Is An Alphabet";
	else
	cout<<c<<"\t It Is Not An ALphabet";
	return 0;
}

