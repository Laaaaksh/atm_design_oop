class Account{
private :
	double balance,
		interest,
		intRate;
	int transactions;
public :
	 // calling the constructor
	 Account (double rate = 0.045, double bal= 0.0){
	 	balance=bal;
	 	intRate= rate;
	 	interest= 0.0;
	 	transactions = 0;
	 }
	 //method for deposit
	 void makeDeposit(double amount){
	 	balance +=amount;
	 	transactions++;
	 }

	 //make a method for withdrawl

	 bool withdraw(double amount); // we will provide its defination later

	 void calculateInterest(){
	 	interest =   balance + intRate;
	 	balance+=interest;
	 }

	 //method to have the balance in the main
	 double getBalance(){
	 	return balance;
	 }
	 // get interest in main

	 double getInterest(){
	 	return interest;
	 }

	 // get transactions in main

	 int getTransactions(){
	 	return transactions;
	 }
};