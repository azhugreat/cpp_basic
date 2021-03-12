#include<iostream>

using std::cin;
using std::cout;
using std::endl;


class Account {
private:
	double balance;
public:
	Account() {
		balance = 0.0;
	}

	Account(double balance_) {
		this->balance = balance_;
	}

	void deposit(double deposit_amount) {
		balance += deposit_amount;
	}

	double withdraw(double withdraw_amount) {
		if (balance < withdraw_amount) {
			cout << "balance is not enough." << endl;
			cout << "balance is: " << balance << "the amount is:" << withdraw_amount << endl;
			return (balance);
		}
		else {
			balance = balance - withdraw_amount;
			return (balance);
		}
	}
};
/*
int main_ano() {
	Account a1;
	Account a2 = Account(100.0);

	a1.deposit(32.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(1000.0) << endl;

	cout << Account(1000.0).withdraw(50) << endl;

	return 0;
}
*/
