#include<iostream>
#include<cstdlib>
#include<cmath>


using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	float a1 = 0, b1 = 0, x1 = 0, y1 = 0;
	double a2 = 0, b2 = 0, x2 = 0, y2 = 0;
	cout << "Введите числа для вычисления\n";

	cin >> a2 >> b2 >> x2;
	cin >> a1 >> b1 >> x1;
	
	
	/*a1 = a2;
	b1 = b2;
	x1 = x2;*/

	y1 = a1 + b1 - sin(a1 * b1 * x1);
	y2 = a2 + b2 - sin(a2 * b2 * x2);

	cout << "Одинарная точность вычислений: y = \n" << y1 << endl;
	cout << "Двойная точность вычислений: y = \n" << y2 << endl;

	system("pause");
	return(0);
}