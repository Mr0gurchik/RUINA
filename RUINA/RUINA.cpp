#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, c, maxx;
	cout << "впишите a: ";
	cin >> a;
	cout << "впишите b: ";
	cin >> b;
	cout << "впишите c: ";
	cin >> c;

	maxx = max({ a,b,c });



	if ((b + c) > a && (c + a) > b && (a + b) > c)
	{
		if (a == b && b == c && a == c)

			cout << "треугольник равносторонний";

		else if ((a == b) || (a == c) || (c == b))

			cout << "треугольник равнобедренный";

		else if (pow(maxx, 2) == (pow(c, 2) + pow(a, 2) + pow(b, 2)) - pow(maxx, 2))

			cout << "треугольник прямоугольный";

		else

			cout << "треугольник обычный";
	}
	else
	
		cout << "такого треугольника не существует";
	
}

