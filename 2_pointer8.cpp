
//pointers and arrays
//banking system
//menu -> deposit, withdraw, display account balance, exit
#include <iostream>

const int MAX_ACCOUNT = 10; //max number of accounts
//prototype
void displayMenu();
void deposit(double *accounts, int numAccounts);
void withdraw(double *accounts, int numAccounts);
void displayBalance(const double *accounts, int numAccounts);

using namespace std;
int main() {
	//accounts
	double accounts[MAX_ACCOUNT] = {0}; //balance of 0
	int numAccounts;
	cout << "Enter the number of accounts up to " << MAX_ACCOUNT << endl;
	cin >> numAccounts;
	numAccounts = (numAccounts > 0 && numAccounts <= MAX_ACCOUNT) ? numAccounts : MAX_ACCOUNT;
	
	int choice;
	bool running = true;
	while(running) {
		displayMenu();
		cin >> choice;
		switch (choice) {
			case 1:
				deposit(accounts, numAccounts);
				break;
			case 2: 
				withdraw(accounts, numAccounts);
				break;
			case 3: 
				displayBalance(accounts, numAccounts);
				
				break;
			case 4:
				running = false;
				cout << "Exit program "<< endl;
				break;
			default:
				cout << "Invalid choice " << endl;
		}
	}
		return 0;
}

void displayMenu() {
	cout << "\n\nHJT Banking System " << endl;
	cout << "1. Deposit " << endl;
	cout << "2. Withdraw " << endl;
	cout << "3. Display " << endl;
	cout << "4. Exit " << endl;
	cout << "Enter your choice: ";
	
	
}
void deposit(double *accounts, int numAccounts)
{
	int accountNumber;
	double amount;
	cout << "Enter account number (1 - " << numAccounts << ") :";
	cin >> accountNumber;
	cout << "Enter amount to deposit: ";
	cin >> amount;
	
	if (accountNumber >= 1 && accountNumber <= numAccounts && amount >0){
		
		accounts[accountNumber - 1] += amount; //deposit amount
		cout << "Deposited " << amount << " into account number " << accountNumber;
	}else{
		cout << "Invalid account number or amount " << endl;
	}
	
	
}
void withdraw(double *accounts, int numAccounts)
{
	int accountNumber;
	double amount;
	cout << "Enter account number (1 - " << numAccounts << ") :";
	cin >> accountNumber;
	cout << "Enter amount to withdraw: ";
	cin >> amount;

	
	if (accountNumber >= 1 && accountNumber <= numAccounts && amount > 0 && accounts[accountNumber -1]>=amount){
		
		accounts[accountNumber - 1] -= amount; //withdraw amount
		
		cout << "Withdrew " << amount << " from account number " << accountNumber;
	}else{
		cout << "Invalid  transaction amount and balance " << endl;
	}
	
	
}

void displayBalance(const double *accounts, int numAccounts){
	cout << "Account Balance: " << endl;
	for (int i=0; i<numAccounts; i++) {
		cout << "Account " << (i+1) << " : PHP " << accounts[i] << endl;
	}
	
}
