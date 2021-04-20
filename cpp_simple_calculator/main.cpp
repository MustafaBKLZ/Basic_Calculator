#include  <iostream>
#include <string>

using namespace std;



double final = 0;
int calculate(char op, int num1, int num2)
{
	switch (op)
	{
	case '+':
		final = num1 + num2;
		break;
	case '*':
		final = num1 * num2;
		break;
	case '-':
		final = num1 - num2;
		break;
	case '/':
		final = num1 / num2;
		break;

	default:
		cout << "wrong operator";
		break;
	}

	cout << "Final is: " << final << endl;
	cout << "--------------------" << endl;
	return final;
}

void start()
{
	cout << "Welcome to Calculator v1..." << endl;
	cout << "www.mustafabukulmez.com" << endl;

	cout << "--------- Use -!- while operator input for Exit  -------" << endl;
	cout << "--------------------------------------" << endl;
}


int main()
{
	start();
	double num2 = 0, num1 = 0;
	char op;

	cout << "input a number" << endl;
	cin >> num1;

Next:
	cout << "input an operator" << endl;
	cin >> op;

	if (op == '!')exit(0);

	cout << "input a number" << endl;
	cin >> num2;

	num1 = calculate(op, num1, num2);
	goto Next;







}
