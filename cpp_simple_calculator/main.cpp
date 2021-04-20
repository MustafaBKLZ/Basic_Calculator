#include  <iostream>
#include <string>

using namespace std;


void start()
{
	cout << "Welcome to Calculator v1..." << endl;
	cout << "www.mustafabukulmez.com" << endl;
	cout << "--------- Use -!- while operator input for Exit  -------" << endl;
	cout << "--------------------------------------" << endl;
}


double final = 0;
char op;


template <typename T> T Calculate(T num1, T num2)
{
	switch (op)
	{
	case '+':final = num1 + num2; break;
	case '*':final = num1 * num2; break;
	case '-':final = num1 - num2; break;
	case '/':final = num1 / num2; break;

	default:cout << "wrong operator"; break;
	}
	cout << "Final is: " << final << endl;
	cout << "--------------------" << endl;
	return final;
}


int main()
{
	start();
	double num2 = 0, num1 = 0;

	cout << "input a number" << endl;
	cin >> num1;

Next:
	cout << "input an operator" << endl;
	cin >> op;
	if (op == '!')exit(0);


	cout << "input a number" << endl;
	cin >> num2;

	num1 = Calculate(num1, num2);

	goto Next;


}
