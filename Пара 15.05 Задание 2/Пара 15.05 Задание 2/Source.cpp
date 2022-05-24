#include<iostream>
#include <cstdlib>

using namespace std;

struct abobus {
	short id;
	int age;
	double salary;
};
// Gnida - ввод инфы в абобуса
abobus Gnida() {
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
	cout << "ID: " << sus.id << endl;
	cout << "Возраст: " << sus.age << endl;
	cout << "Зарплата: " << sus.salary << endl;
}

double Graznie_dengi(abobus H1, abobus H2, abobus H3, abobus H4, abobus H5, abobus H6, abobus H7, abobus H8, abobus H9, abobus H10){
	double srednie = 0;
	srednie = (H1.salary + H2.salary + H3.salary + H4.salary + H5.salary + H6.salary + H7.salary + H8.salary + H9.salary + H10.salary) / 10;
	return(srednie);
}



int main() {
	setlocale(0, "");
	abobus H1, H2, H3, H4, H5, H6, H7, H8, H9, H10;
	/*H1 = Gnida();   //Ввод с клвиатуры всех данных
	H2 = Gnida();
	H3 = Gnida();
	H4 = Gnida();
	H5 = Gnida();
	H6 = Gnida();
	H7 = Gnida();
	H8 = Gnida();
	H9 = Gnida();
	H10 = Gnida();*/
	
	
//Для проверки
H1.salary = 10;
H2.salary = 10;
H3.salary = 10;
H4.salary = 10;
H5.salary = 10;
H6.salary = 10;
H7.salary = 10;
H8.salary = 10;
H9.salary = 10;
H10.salary = 10;
	
	cout << "=======================================================\n";
	cout << Graznie_dengi(H1, H2, H3, H4, H5, H6, H7, H8, H9, H10) << endl;

	helicopter(H1);
	helicopter(H2);
	helicopter(H3);
	helicopter(H4);
	helicopter(H5);
	helicopter(H6);
	helicopter(H7);
	helicopter(H8);
	helicopter(H9);
	helicopter(H10);


	system("pause");
	return(0);
}