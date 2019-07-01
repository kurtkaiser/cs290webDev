/******************************************************************************* 
** Author:       Kurt Kaiser
** Date:         1-13-2019
** Description:  Calculates the average of five user inputted numbers
*******************************************************************************/ 

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double num1,
               num2,
               num3,
               num4,
               num5;

        cout << "Please enter five numbers." << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	cout << "The average of those numbers is:" << endl;
	cout << (num1 + num2 + num3 + num4 + num5) / 5 << endl;

	return 0;
}

