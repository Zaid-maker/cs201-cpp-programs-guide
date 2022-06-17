#include <iostream>
using namespace std;

maxResult(float eq1, float eq2, float eq3)
{
	if (eq1 > eq2 && eq1 > eq3)
	{
		cout << "Eqation 1: "
			 << " " << eq1 << " "
			 << "Result is maximum \n"
			 << endl;
	}

	else if (eq2 > eq1 && eq2 > eq3)
	{
		cout << "Eqation 2: "
			 << " " << eq2 << " "
			 << "Result is maximum \n"
			 << endl;
	}

	else if (eq3 > eq1 && eq3 > eq2)
	{
		cout << "Equation 3: "
			 << " " << eq3 << " "
			 << "Result is maximum \n"
			 << endl;
	}
}

calculateEquationResult()
{
	float eq1;
	float eq2;
	float eq3;
	float a;
	float b;
	float c;
	float d;
	float x;

	int count = 0;

	while (count < 2)
	{
		count++;

		if (count == 2)
		{
			a = 6;
			b = 7;
			c = 8;
			d = 9;
			x = 11;
		}
		else
		{
			a = 2;
			b = 3;
			c = 4;
			d = 5;
			x = 10;
		}

		eq1 = x + (b / (3 * a));
		eq2 = (3 * a * c - b * b) / (3 * a * a);
		eq3 = (2 * b * b * b - 9 * (a + b + c) + 27 * a * a * d) / (27 + a * a * a);

		cout << "Equation 1: "
			 << " " << eq1 << endl;
		cout << "Equation 2: "
			 << " " << eq2 << endl;
		cout << "Equation 3: "
			 << " " << eq3 << "\n"
			 << endl;

		maxResult(eq1, eq2, eq3);
	}
}

int main()
{
	char choice;
	bool run = true;

	while (run)
	{
		do
		{
			calculateEquationResult();
			cout << "Do you want to perform any other calculation(y/n): ";
			cin >> choice;
			choice = tolower(choice);
		} while (choice != 'n' && choice != 'y');

		if (choice == 'n')
		{
			run = false;
		}
	}

	return 0;
}
