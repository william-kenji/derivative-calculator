#include <iostream>
using namespace std;

int main()
{
	char space, variable, power;
	char form = 'c';
	int correct_form = 0;
	int again = 0;
	// main loop
	while (again == 0)
	{
		while (correct_form == 0)
		{
			cout << "Enter the form of your function:\n";
			cout << "a. 4x^2\n";
			cout << "b. Something else...\n";
			cin >> form;
			if (form == 'a' || form == 'b')
			{
				break;
			}
			else if (cin.fail())
			{
				cout << "You can only enter single letters from the options above. Try again!\n";
			}
		}

		if (form == 'a' || form == 'A')
		{
			cout << "Enter your function (e.g., 5 x ^ 4): ";
			double coefficient, exponent;
			cin >> coefficient >> variable >> power >> exponent;
			if (!cin.fail())
			{
				if (power == '^')
				{
					// To find the derivative using the power rule, you need to multiply the exponent times the coefficient
					// Then raise x to a power one less than the original exponent.
					double d_coefficient = coefficient * exponent;
					double d_exponent = exponent - 1;
					cout << "The derivative of [" << coefficient << variable << power << exponent << "] is:\n";
					cout << " ------------------ \n";
					cout << d_coefficient << variable << power << d_exponent << "\n";
					cout << "--------------------\n";
					cout << endl;
				}
				else
				{
					cout << "Exponent operator should be ^, which you can type by pressing \"Shift + 6\"\n";
				}
			}
			else
			{
				cout << "Invalid input detected. Try again!\n";
			}
		}
		else if (form == 'b')
			cout << "We are working on that, stay tuned!\n";
		cout << "Again? (y/n)\n";
		char y_n;
		cin >> y_n;
		if (y_n == 'y' || y_n == 'Y')
		{
			again = 0;
		}
		else
		{
			again = 1;
		}
	}
	return 0;
}