#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	setlocale(0, "");
	int day, month;
	cout << "Введите день и месяц рождения\n";
	cin >> day >> month;

	switch (month)
	{
	case 1: 
		if (day >= 20)
			cout << "Ваш знак зодиака Водолей\n";
		else
			cout << "Ваш знак зодиака Козерог\n";
		break;
			
	case 2:
		if (day >= 19)
			cout << "Ваш знак зодиака Рыбы\n";
		else
			cout << "Ваш знак зодиака Водолей\n";
		break;
	
	case 3:
		if (day >= 21)
			cout << "Ваш знак зодиака Овен\n";
		else
			cout << "Ваш знак зодиака Рыбы\n";
		break;
	
	case 4:
		if (day >= 20)
			cout << "Ваш знак зодиака Телец\n";
		else
			cout << "Ваш знак зодиака Овен\n";
		break;
	
	case 5:
		if (day >= 21)
			cout << "Ваш знак зодиака Близнецы\n";
		else
			cout << "Ваш знак зодиака Телец\n";
		break;

	case 6:
		if (day >= 22)
			cout << "Ваш знак зодиака Рак\n";
		else
			cout << "Ваш знак зодиака Близнецы\n";
		break;

	case 7:
		if (day >= 23)
			cout << "Ваш знак зодиака Лев\n";
		else
			cout << "Ваш знак зодиака Рак\n";
		break;

	case 8:
		if (day >= 23)
			cout << "Ваш знак зодиака Дева\n";
		else
			cout << "Ваш знак зодиака Лев\n";
		break;

	case 9:
		if (day >= 23)
			cout << "Ваш знак зодиака Весы\n";
		else
			cout << "Ваш знак зодиака Дева\n";
		break;

	case 10:
		if (day >= 23)
			cout << "Ваш знак зодиака Скорпион\n";
		else
			cout << "Ваш знак зодиака Весы\n";
		break;

	case 11:
		if (day >= 23)
			cout << "Ваш знак зодиака Стрелец\n";
		else
			cout << "Ваш знак зодиака Скорпион\n";
		break;
	
	case 12:
		if (day >= 22)
			cout << "Ваш знак зодиака Козерок\n";
		else
			cout << "Ваш знак зодиака Стрелец\n";
		break;
	}
	system("pause");
	return (0);
}