#include <iostream>
using namespace std;

int main()
{
	char space, variable, power, division;
	double coefficient, exponent, d_coefficient, d_exponent;
	char form = 'c';
	int correct_form = 0;
	int again = 0;
	// main loop
	while (again == 0)
	{
		while (correct_form >= 0)
		{
			cout << "---Main Menu---\n";
			cout << "Enter the form of your function:\n";
			cout << "a. 4x^2\n";
			cout << "b. Something else...\n";
			cout << "h. Type \"h\" for help\n";
			cout << "    Your Choice:\n";
			cin >> form;
			if (form == 'a' || form == 'b')
			{
				break;
			}
			else if (cin.fail())
			{
				cout << "You can only enter single letters from the options above. Try again!\n";
			}
			else if (form == 'h' || form == 'H')
			{
				while (correct_form != 0)
					cout << endl;
					cout << "---Help Menu---\n";
					cout << "Chose from the options bellow:\n";
					cout << "1. Instructions\n" << "2. Contact developer\n" << "3. Exit\n";
					cin >> correct_form;
					if (correct_form == 1)
						cout << "This calculator computes the derivative of functions like 4x^3 or 4/x^2. On most systems, you can type in your function without spaces. However, if you experience issues with two-digit numbers, you should separate your input using spaces, like this: \"45 x ^ 12\", or \"14 / x ^ 56\"";
					else if (correct_form == 2)
						cout << "Email the developer team at: taskeagle@proton.me\n";
					else if (correct_form == 3)
						correct_form = 0;
			}
		}

		if (form == 'a' || form == 'A')
		{
			cout << "Enter your function (e.g., 5 x ^ 4): ";
			cin >> coefficient >> variable >> power >> exponent;
			if (!cin.fail())
			{
				if (power == '^')
				{
					// To find the derivative using the power rule, you need to multiply the exponent times the coefficient
					// Then raise x to a power one less than the original exponent.
					d_coefficient = coefficient * exponent;
					d_exponent = exponent - 1;
					cout << endl;
					cout << "--------------------\n";
					cout << "The derivative of [" << coefficient << variable << power << exponent << "] is:\n";
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
		{
			char fraction;
			cout << "Does your function have a fraction like 43/x? (y/n)\n";
			cin >> fraction;

			if (fraction == 'y' || fraction == 'Y')
			{
				cout << "Enter your fraction in the format \"2/x^1\" or \"45/x^3\": ";
				cin >> coefficient >> division >> variable >> power >> exponent;
				double frac_exponent = 0 - exponent;
				d_coefficient = coefficient * frac_exponent;
				d_exponent = exponent + 1;
				cout << endl;
				cout << "--------------------\n";
				cout << "The derivative of [" << coefficient << division << variable << power << exponent << "] is:\n";
				cout << d_coefficient << division << variable << power << d_exponent << endl;
				cout << "--------------------\n";
				cout << endl;
			}
			else
			{
				cout << "We are working on that, stay tuned!\n";
			}
		}
		else
		{
			cout << "We are working on that, stay tuned!\n";
		}
		// for the loop
		cout << "Again? (y/n)\n";
		char y_n;
		cin >> y_n;
		if (y_n == 'y' || y_n == 'Y')
		{
			again = 0;
			cout << endl;
		}
		else
		{
			again = 1;
		}
	}
	return 0;
}
