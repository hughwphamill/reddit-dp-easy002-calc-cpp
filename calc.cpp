#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double startingAmount, monthlyInvestment, interest;
	int years;

	cout << "Compound Interest Calculator\n";
	cout << "============================\n\n";
	
	cout << "Enter your starting deposit: ";
	cin >> startingAmount;

	cout << endl<< "Enter your monthly investment: ";
	cin >> monthlyInvestment;

	cout << endl << "Enter the percentage interest rate: ";
	cin >> interest;

	cout << endl << "Enter how many years you will save: ";
	cin >> years;
	cout << endl;

	if (years < 0)
		years = 0;

	cout << "Savings Report\n";
	cout << "==============\n\n";

	double runningTotal = startingAmount;
	double totalDeposits = startingAmount, totalInterest = 0.0;
	double yearlyInvestment = monthlyInvestment * 12;

	cout << "Year\t\tBalance\t\tDeposits\tInterest\n";
	cout << "=======================================================================\n";
	for (int i = 1; i <= years; i++)
	{
		runningTotal += yearlyInvestment;
		double yearlyInterest = (runningTotal * interest) / 100;
		runningTotal += yearlyInterest;

		totalDeposits += yearlyInvestment;
		totalInterest += yearlyInterest;
		
		cout << i << "\t\t" << runningTotal << "\t\t" << yearlyInvestment << "\t\t" << yearlyInterest << endl;
	}
	cout << "=======================================================================\n";
	cout << "Total\t\t" << runningTotal << "\t\t" << totalDeposits << "\t\t" << totalInterest << endl;
	return 0;
}