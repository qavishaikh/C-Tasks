#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	if(a!=b){
		cout<<"Good";
		if(a>b){
			cout<<"Nice";
			if(a>=b){
				cout<<"Excellent";
				
			}
		}
	if(a<b){
					cout<<"A is Less Then B";
				}	
	}
	else{
		cout<<"A is Equal to B";
	}
	return 0;
}
