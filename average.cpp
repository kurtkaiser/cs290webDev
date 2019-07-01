#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double num1;
        double num2;
	double num3;
	double num4;
	double num5;
        cout << "Enter 5 numbers: " << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	cout << "Average:" << endl;
	cout << (num1 + num2 + num3 + num4 + num5) / 5 << endl;
	return 0;
}

