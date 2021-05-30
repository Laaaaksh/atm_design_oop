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
	 void makedeposit(double amount){
	 	balance +=amount;
	 	transactions++;
	 }

	 //method for withdrawl
};