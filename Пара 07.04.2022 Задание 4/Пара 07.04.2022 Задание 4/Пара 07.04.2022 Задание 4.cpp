#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int year = 0, days = 0 ;

	cout << "Введите год\n";
	cin >> year;

	if (year % 4 == 0 or (year % 100 == 0 && year % 400 == 0))
	{
		days = 366;
		cout << "Год " << year << " является весокосным и количество дней равно: " << days << endl;
	}
	else
	{
		days = 365;
		cout << "Год " << year << " не является весокосным и количество дней равно: " << days << endl;
	}
	system("pause");
	return(0);
}

