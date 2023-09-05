#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char Student_name[]="Muhammad Qavi"; 
	int Roll_no=80;
	char Section='B';
	string Department="Information_Technology";
	int Total_Marks=500;  
	float Percentage;	
	int sub1,sub2,sub3,sub4,sub5;
	cout<<endl<<"\t Chemistry= "<<ends;
	cin>>sub1;
	cout<<"\t physics= "<<ends;
	cin>>sub2;
	cout<<"\tMath= "<<ends;
	cin>>sub3;
	cout<<"\t English= "<<ends;
	cin>>sub4;
	cout<<"\t Urdu= "<<ends;
	cin>>sub5;
	int obtained_marks=sub1+sub2+sub3+sub4+sub5; 
      Percentage=(float)obtained_marks / Total_Marks * 100;      			
	cout<<endl<<"\t Student Name= "<<Student_name<<endl;
	cout<<"\t Roll NO:  "<<Roll_no<<endl;
	cout<<"\t Department=  "<<Department<<endl;
	cout<<"\t Section=  "<<Section<<endl;
	cout<<"\t Total Marks=  "<<Total_Marks<<endl;
	cout<<"\t Obtained_Marks= "<<obtained_marks<<endl;
	cout<<"\t Percentage= "<<Percentage<<"%"<<endl;
  //Switch Statement
     switch(Percentage >= 90){
     	case 1: 
     	 cout<<endl<<"\t A + Grade CONGRATULATIONS";
     	 break;
     	 case 0:
     	switch(Percentage>=80&&Percentage<=90){	     	
     		case 1:
     	 	cout<<endl<<"\t A 1 Grade";
     	 	break;
     	 	case 0:	
     	switch(Percentage>=70&&Percentage<=80){
      	case 1:
     	   	cout<<endl<<"\t A Grade";
     	   	break;
     	   	case 0:
	switch(Percentage>=60&&Percentage<=70){
		case 1:	
		cout<<endl<<"\t B Grade";
		break;
		case 0:
	switch(Percentage>=50&&Percentage<=60){
		case 1:
		cout<<endl<<"\t C Grade";
		break;
		case 0:
	switch(Percentage>=40&&Percentage<=50){
		case 1:
		cout<<endl<<"\t D Grade";
		break;
		case 0:
		cout<<endl<<"\t Fail";
		break;	}	}	}   }  } }
 cout<<"\n\n\t\t Make By:  Muhammad Qavi"; 
 return 0;
}












