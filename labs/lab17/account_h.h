#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
	public:
		Account();
		void setId(int);
		void setAnnualInterestRate(double);
		int getId() const;
		double getBalance() const;
		double getAnnualInterestRate() const;
		double getMonthlyInterestRate() const;
		void withdraw(double);
		void deposit(double);

	private:
		int id;
		double balance;
		double annualInterestRate;
};

#endif