#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int random_num=rand()%11;
	int guess,count=0;
	do{
		cout<<"guess a number between 0 and 10"<<endl;
		cout<<"your guess:  ";
		cin>>guess;
		if(guess>10 || guess<0){
			cout<<"please enter number in given range"<<endl;
			getch();
			system("cls");
			continue;
		}
		if(guess>random_num){
			cout<<"your guess is greater then random number"<<endl;
			getch();
			system("cls");
			continue;
		}
		else if(guess<random_num){
			cout<<"your guess is lower then random number"<<endl;
			getch();
			system("cls");
			continue;
		}
		else if(guess==random_num){
			cout<<"congratulation you guessed the number correct :)"<<endl;
			getch();
			system("cls");
			continue;
		}
	}while(guess!=random_num);
}
