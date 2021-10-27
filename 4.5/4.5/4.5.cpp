#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, r;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "r = "; cin >> r;
		if ((y <= sqrt(pow(r, 2) - pow(x, 2)) && x >= 0) ||
			(y >= abs(x) && y <= -r && y <= r))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			cout << "r = "; cin >> r;
			x = 6. * rand() / RAND_MAX - r;
			y = 6. * rand() / RAND_MAX - r;
			if ((y <= sqrt(pow(r, 2) - pow(x, 2)) && x >= 0) ||
				(y >= abs(x) && y <= -r && y <= r))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}