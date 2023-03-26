#include <iostream>
#include <iomanip>
using namespace std;

//declaration of top-level functions
void input(double& investment, double& rate ,double& term);
void process(double investment, double rate, double term, double& multipllier, double& futureValue);
void output(double investment, double rate, double term, double multiplier, double futureValue);

//declaration of low-level functions
double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double investment, double rate, double term);
void printResult(double multiplier, double value);

int main() {
	double investment, rate, term;
	double multiplier, futureValue;

	input(investment, rate, term);
	process(investment, rate, term, multiplier, futureValue);
	output(investment, rate, term, multiplier, futureValue);
	return 0;
}

void input(double& investment, double& rate, double& term) {
	investment = getInput("Enter the value of investment : ");
	rate = getInput("Enter the interest rate per year : ");
	term = getInput("Enter the term(number of years):");

}
void process(double investment, double rate, double term, double& multiplier, double& futureValue)
{
	multiplier = findMultiplier(rate, term);
	futureValue = multiplier * investment;

}
void output(double investment, double rate, double term, double multiplier, double futuerValue)
{
	printData(investment, rate, term);
	printResult(multiplier, futuerValue);
}
double getInput(string message)
{
	double input;
	do {
		cout << message;
		cin >> input;
	} while (input < 0.0);
	return input;
}
double findMultiplier(double rate, double term)
{
	double factor = 1 + rate / 100;
	return pow(factor, term);
}
void printData(double investment, double rate, double term)
{
	cout << endl << "Information about investment : " << endl;
	cout << "Investment : " << fixed << setprecision(2) << investment << endl;
	cout << "Interest rate: " << rate << fixed << setprecision(2);
	cout << "Percent of year" << endl;
	cout << "Term : " << term << "years" << endl;
}
void printResult(double multiplier, double futureValue)
{
	cout << "Investment is multiplied by : " << fixed << setprecision(8);
	cout << multiplier << endl;
	cout << "Futer value : " << fixed << setprecision(2);
	cout << futureValue << endl;
}