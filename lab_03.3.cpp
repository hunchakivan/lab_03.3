// Lab_03_3.cpp
// < Гунчак Іван >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 5
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -2)
		y = 3 + x;
	else
		if (x > -2 && x <= 4)
			y = 1 + ((-R - 1) / 6) * (x + 2);
		else
			if (x > 4 && x <= (8 - R))
				y = -R;
			else
				if (x > (8 - R) && x <= (8 + R))
					y = sqrt(pow(R, 2) - pow((x - 8), 2)) + R;
				else
					y = -R;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}