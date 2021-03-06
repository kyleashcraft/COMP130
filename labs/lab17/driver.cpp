// lab17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;


int main()
{
	cout << "~~~~~~~~~ EXERCISE 1 ~~~~~~~~~" << endl << endl;
	MyPoint p1;
	MyPoint p2(10, 30.5);

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl << endl;

	cout << "p2.getX(): " << p2.getX() << endl;
	cout << "p2.getY(): " << p2.getY() << endl << endl;

	cout << "p1.getDistance(p2): " << p1.getDistance(p2) << endl << endl << endl;

	cout << "~~~~~~~~~ EXERCISE 2 ~~~~~~~~~" << endl << endl;

	Account act;

	act.setId(1122);
	act.setAnnualInterestRate(4.5);
	act.deposit(20000);

	cout << "Account ID: " << act.getId() << endl;
	cout << "Account balance: " << act.getBalance() << endl;
	cout << "Account's annual interest rate: " << act.getAnnualInterestRate() << "%" << endl;
	cout << "Account's monthly interest rate: " << act.getMonthlyInterestRate() << "%" << endl;

	act.withdraw(2500);

	cout << "Account balance after a withdrawal of $2500: " << act.getBalance() << endl;

	act.deposit(3000);

	cout << "Account balance after a deposit of $3000: " << act.getBalance() << endl;


    return 0;
}

