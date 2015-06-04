// InterestEarnedCPP.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double T;
	double Rate;
	double Principal;
	double Interest;
	double FinalBalance;

	cout << "Enter the principal balance in the account: ";
	cin >> Principal;
	cout << "Enter the annual interest rate percentage: ";
	cin >> Rate;
	cout << "Enter the number of times the interest is compounded (months): ";
	cin >> T;


	Rate = Rate / 100;

	FinalBalance = Principal * pow(1 + (Rate / T), T);

	Interest = FinalBalance - Principal;

	cout << "Interest Rate: " << Rate << endl;
	cout << "Times Compounded: " << T << endl;
	cout << "Principal:   $" << Principal << endl;
	cout << "Interest:    $" << Interest << endl;
	cout << "Amount in Savings:   $" << FinalBalance << endl;


	system("PAUSE");
	return 0;

}