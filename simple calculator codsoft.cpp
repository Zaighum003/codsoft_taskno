//attempted by zaighum zawar
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double digit1,digit2;
	int choice;
	char answer;
	cout<<"******welcome****** "<<endl;
	do{
	cout<<"enter arithmatic operation you want to do: "<<endl;
	cout<<"1.  addition(+)    "<<endl;
	cout<<"2.  subtratction(-)    "<<endl;
	cout<<"3.  multiplication(*)    "<<endl;
	cout<<"4.  division(/)    "<<endl;
	cout<<"your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			
			cout<<"enter first digit: ";
			cin>>digit1;
			cout<<"enter second digit: ";
			cin>>digit2;
			cout<<digit1<<" +"<<digit2<<" = "<<digit1+digit2<<endl;
			getch();
			break;
		case 2:
			cout<<"enter first digit: ";
			cin>>digit1;
			cout<<"enter second digit: ";
			cin>>digit2;
			cout<<digit1<<" -"<<digit2<<" = "<<digit1-digit2<<endl;
			getch();
			break;
		case 3:
			cout<<"enter first digit: ";
			cin>>digit1;
			cout<<"enter second digit: ";
			cin>>digit2;
			cout<<digit1<<" *"<<digit2<<" = "<<digit1*digit2<<endl;
			getch();
			break;
		case 4:
			cout<<"enter Divedend: ";
			cin>>digit1;
			cout<<"enter Divisor: ";
			cin>>digit2;
			if(digit2!=0){
            cout<<digit1<<" / "<<digit2<<" = "<<digit1/digit2<<endl;
        	} 
			else{
            cout<< "Division by zero is not allowed."<<endl;
            }
			getch();
			break;
		default:
			cout<<"wrong option"<<endl;
			getch();
			break;
			}
		cout<<"do you want to continue using the calculator? press y if yes"<<endl;
		cin>>answer;
		system("cls");
		}while(answer=='y'||answer=='Y');
	
}
