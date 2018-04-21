#include "account_h.h"
#include "stdafx.h"

using namespace std;

Account::Account() {
	id = 0;
	balance = 0;
	annualInterestRate = 0;
};

void Account::setId(int p_id) {
	id = p_id;
};

void Account::setAnnualInterestRate(double rate) {
	annualInterestRate = rate;
};

int Account::getId() const {
	return id;
};

double Account::getBalance() const {
	return balance;
};

double Account::getAnnualInterestRate() const {
	return annualInterestRate;
};

double Account::getMonthlyInterestRate() const {
	return annualInterestRate / 12;
};

void Account::withdraw(double withdraw) {
	balance -= withdraw;
};

void Account::deposit(double deposit) {
	balance += deposit;
};