#include<iostream>
#include<iomanip>
#include "Account.h"
using namespace std;
// make a display menu function

void displayMenu(){
		cout << "\n\n		 MENU \n\n \t";
		cout << "	 1) display the account balance\n";
		cout << "2) display the number of transactions\n";
		cout << "3) display the number of transactions\n";
		cout << "4) display interest earned for this period\n";
		cout << "5) make a deposit\n";
		cout << "6) make a withdrawal\n";
		cout << "7) Add interest for this period\n";
		cout << "Enter your choice :";

}

// make a method to get choice validate choice and retun choice to main method

char getChoice(char max)
{
	char choice = cin.get();
	cin.ignore(); // bypass the enter '\n' in the input buffer

	while(choice < '1' || choice > max){
		cout<< "Choice must be between 1 and " << max << "."
		<< "Please re- enter choice";
		choice = cin.get();
		cin.ignore();
	}
	return choice;
}

void makeDeposit(Account &account){
	double dollars;

	cout<<"Enter the amount of deposit : ";
	cin >> dollars;
	cin.ignore();
	account.makeDeposit(dollars);

}

void withdraw(Account &account){
	double dollars;

	cout << "Enter the amount of withdrawl";
	cin >> dollars;
	cin.ignore();
	if(!account.withdraw(dollars)) //if amount is invalid
	{
		cout << "Error : withdrawn amount is too large";
	}

	//after completing these methods we make a main method of this application
}

int main(){

	const char MAX_CHOICE= '7';

	Account savings;
	char choice;

	cout << fixed << showpoint << setprecision(2);

	do {
		displayMenu();
		choice = getChoice(MAX_CHOICE);

		switch(choice){
			case '1' :
			cout << "The cureent balance is $";
			cout << savings.getBalance() << endl;
			break;
			case '2' :
			cout << "There have been";
			cout << savings.getTransactions() << endl;
			break;
			case '3' :
			cout << "The cureent balance is $";
			cout << savings.getInterest() << endl;
			break;
			case '4' :
			makeDeposit(savings);
			break;
			case '5' :
			makeDeposit(savings);
			break;
			case '6' :
			savings.calculateInterest();
			cout<< "Interest added . \n";
		}
	} while(choice != '7');
	  return 0;
}