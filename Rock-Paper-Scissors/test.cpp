#include <iostream>
#include <cstdlib>		// For rand() and srand()
#include <unistd.h>		// For sleep

using namespace std;

int takeInput(){
	int choice;
	cout << "Enter your choice : " << endl;
	cout << "1.Rock\n2.Paper\n3.Scissors" << endl << endl;
	cout << "Choose : ";
	cin >> choice;
	if(choice != 1 && choice != 2 && choice != 3){
		cout << "Choose a valid option" << endl;
		sleep(2);
		return 0;
	}
	return choice;
}

int main(){

	int choice, randNo;

	system("clear");
	cout << "Welcome to the game" << endl;
	do{
		choice = takeInput();
		if(choice == 0){
			system("clear");
		}
	}
	while(choice == 0);
	cout << endl;

	cout << "The comuputer is playing ";
	for(int j = 0; j < 3; j++){
		cout << ". " << flush;		// Without flush the program gets stuck
		sleep(1);
	}
	cout << endl << endl;

	srand(time(0));
	randNo = rand() % (3 - 1 + 1) + 1;
	
	if(choice == randNo){
		cout << "Draw" << endl;
	}
	else{
		if(choice == 1 && randNo == 2){
			cout << "You Lost" << endl;
		}
		if(choice == 1 && randNo == 3){
			cout << "You Win" << endl;
		}
		if(choice == 2 && randNo == 1){
			cout << "You Win" << endl;
		}
		if(choice == 2 && randNo == 3){
			cout << "You Lost" << endl;
		}
		if(choice == 3 && randNo == 1){
			cout << "You Lost" << endl;
		}
		if(choice == 3 && randNo == 2){
			cout << "You Win" << endl;
		}
	}

	cout << endl;

	cout << "You played ";
	switch(choice){
		case 1:
		cout << "Rock" << endl;
		break;
		case 2:
		cout << "Paper" << endl;
		break;
		case 3:
		cout << "Scissors" << endl;
		break;
	}
	cout << "The computer played ";
	switch(randNo){
		case 1:
		cout << "Rock" << endl;
		break;
		case 2:
		cout << "Paper" << endl;
		break;
		case 3:
		cout << "Scissors" << endl;
		break;
	}

	return 0;
}

// See https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/ for reference on srand() and rand()

