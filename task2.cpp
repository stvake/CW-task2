// task2.cpp : Defines the entry point for the application.
//

#include "task2.h"
#include "calculator.h"

using namespace std;

int main()
{

	double a;
	double b;

	Calculator calc;

	cout << "Enter a and b:" << "\n";
	cin >> a >> b;
	
	cout << "Add(a, b) = " << calc.Add(a, b) << "\n";
	cout << "Sub(a, b) = " << calc.Sub(a, b) << "\n";
	cout << "Mul(a, b) = " << calc.Mul(a, b) << "\n";
	cout << "Div(a, b) = " << calc.Div(a, b) << "\n";

	return 0;
}
