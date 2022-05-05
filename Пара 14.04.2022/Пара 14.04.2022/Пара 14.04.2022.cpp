#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int weight, sign;
	setlocale(0, "");
	cout << "Введтте обозначение карты в колоде сначала код масти, потом код наминала карты\n";
	cin >> sign >> weight;

	switch (weight)
	{
	case 2: cout<<"Двойка ";break;
	case 3: cout<<"Тройка ";break;
	case 4: cout<<"Четвёрка ";break;
	case 5: cout<<"Пятёрка ";break;
	case 6: cout<<"Шестёрка ";break;
	case 7: cout<<"Семёрка ";break;
	case 8: cout<<"Восьмёрка ";break;
	case 9: cout<<"Девятка ";break;
	case 10: cout<<"Десятка ";break;
	case 11: cout<<"Валет ";break;
	case 12: cout<<"Дама ";break;
	case 13: cout<<"Король ";break;
	case 14: cout << "Туз ";break;
	default: cout << "Я не знаю такого номинала карты\n"; break;
	}

	switch (sign) {
	case 1: cout <<"пик\n";break;
	case 2: cout <<"треф\n";break;
	case 3: cout <<"бубей\n";break;
	case 4: cout << "червей\n"; break;
	default: cout << "Я не знаю такой масти\n"; break;
	}
	
	
	system("pause");
	return(0);
}
