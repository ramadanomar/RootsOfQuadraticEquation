#include <iostream>
#include <cmath>

using namespace std;
// ax^2 + bx+ c

int main()
{
	int a, b, c, u, v;
	float delta, realPart, imaginaryPart, x1, x2;

	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;

	cout << "u= "; cin >> u;
	cout << "v= "; cin >> v;

	if (u > v) // Verificam u si v;
		swap(u, v);


	if (a == 0) // Verificam a ul
	{
		cout << "Functia nu este quadratica";
	}
	else
	{
		delta = b * b - 4 * a * c; // Delta = b^2-4ac
		
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta) / (2 * a));
			x2 = (-b - sqrt(delta) / (2 * a));

			int cateAfisate = 0;
			cout << "Radacinile care apar in intervalul u si v sunt:";

			if (x1 >= u && x1 <= v)
			{
				cout << endl << x1 << endl;
				cateAfisate++;
			}

			if (x2 >= u && x2 <= v)
			{
				cout << endl << x2 << endl;
				cateAfisate++;
			}

			if (cateAfisate == 0)
				cout << "Niciuna :(!";

		}
		else if (delta == 0)
		{
			cout << "Radacinile sunt acelesi si reale";
			x1 = (-b + sqrt(delta)) / (2 * a);

			if (x1 >= u && x1 <= v)
				cout << "\n Radacina este " << x1;
			else
				cout << "\n Radacina nu apare in interval";

		}
		else 
		{
			realPart = 1.0*-b/(2 * a);
			imaginaryPart = sqrt(-delta) / (2 * a);

			cout << "Radacinile sunt complexe si diferite";

			cout << "Radacina 1 = " << realPart << " + " << imaginaryPart << "i";
			cout << "Radacina 1 = " << realPart << " - " << imaginaryPart << "i";
		}
	}
}