#include <iostream>
using namespace std;

#include "Inequalities.hpp"

int main()
{
	double d1, d2;
	cout << "Give the first number : ";
	cin >> d1;
	cout << "Give the second number : ";
	cin >> d2;
	char c;
	cout << "Which function a) maxi() or b) mini() ? ";
	cin >> c;
	if (c == 'a')
		cout << "Max value is : " << maxi(d1, d2) << endl;
	else
		cout << "Min value is : " << mini(d1, d2) << endl;
	double da = 1.0, db = 2.0, dc = 3.0;
	cout << "\n\nMax and Min of 3 numbers :\n";
	cout << "Max value is : " << maxi(da, db, dc) << endl;
	cout << "Min value is : " << mini(da, db, dc) << endl;
}
