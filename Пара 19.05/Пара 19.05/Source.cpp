#include<iostream>
#include <cstdlib>

using namespace std;

struct abobus {
	short id;
	int age;
	double salary;
};
// Gnida - ввод инфы в абобуса
abobus Gnida () {      
	abobus sus;
	cout << "Введите ID человека\n";
	cin >> sus.id;
	
	cout << endl << "Введите полный возраст\n";
	cin >> sus.age;
		
	cout << endl << "Введите размер зарплаты\n";
	cin >> sus.salary;

	return(sus);

}
// Вывод информации из абобуса
void helicopter(abobus sus) {
	cout << "ID: " << sus.id<< endl;
	cout << "Возраст: " << sus.age << endl;
	cout << "Зарплата: " << sus.salary<< endl;
}

int main() {
	setlocale(0, "");
	abobus ya;
	abobus ti;
	ya = Gnida();
	ti = Gnida();

	cout << "=======================================================\n";

	helicopter(ya);
	helicopter(ti);

	system("pause");
	return(0);
}