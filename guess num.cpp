#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num=(rand() % 500) + 1;   // to complete the guess between 1-500
	int guess=0;
	do{
		cout<<"enter the number between 1-500 to guess--> "<<endl;
		cin>>guess;
		if(guess>num)
		{
			cout<<"if you want to win guess lower : "<<endl;
		}
		else if(guess<num)
		{	
			cout<<"if you want to win guess higher : "<<endl;
		}
		else
		{
			cout<<"CONGRATS you won the game "<<endl;
		}
	}while(guess!=num);
	
}
