#include <iostream>
using namespace std;

#include "GenericInequalities.cpp"

int main()
{
	int d1, d2;
	cout << "Give the first number : ";
	cin >> d1;
	cout << "\nGive the second number : ";
	cin >> d2;
	char c;
	cout << "Which function a) Max() or b) Min() ? ";
	cin >> c;
	if (c == 'a')
		cout << "Max value is : " << Max<int>(d1, d2) << endl;
	else
		cout << "Min value is : " << Min<int>(d1, d2) << endl;
	long da = 12334, db = 2, dc = -3;
	cout << "\n\nMax and Min of 3 numbers : \n";
	cout << "Max value is : " << Max<long>(da, db, dc) << endl;
	cout << "Min value is : " << Min<long>(da, db, dc) << endl;
}
