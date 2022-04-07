#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	_int64 t, t10, t2, razn_b, razn_Gb;
	cout << "Введите количество терабайт\n";
	cin >> t;
	t10 = t * pow(10, 12);
	t2 = t * pow(2, 40);
	razn_b = t2 - t10;

	razn_Gb = razn_b / pow(2, 30);
	cout << "Разница составляет: " << razn_b << " байт или "<< razn_Gb <<" Гигабайт\n";
	system("pause");
	return(0);
}
