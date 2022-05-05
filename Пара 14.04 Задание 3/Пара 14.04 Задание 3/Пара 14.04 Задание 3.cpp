#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(0, "");
	float numin, sumsq = 0;
	float c = 6;
	cout << "Введите число\n";
	
	cin >> numin;

	while (numin < c) {

		cin >> numin;
		sumsq += numin * numin;
	}
	
	cout << "Сумма квадратов всех чисел равна: " << sumsq << endl;
	
	system("pause");
	return(0);

}

