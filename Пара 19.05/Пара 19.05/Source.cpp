#include<iostream>
#include <cstdlib>

using namespace std;

struct abobus {
	short id;
	int age;
	double salary;
};
// Gnida - ���� ���� � �������
abobus Gnida () {      
	abobus sus;
	cout << "������� ID ��������\n";
	cin >> sus.id;
	
	cout << endl << "������� ������ �������\n";
	cin >> sus.age;
		
	cout << endl << "������� ������ ��������\n";
	cin >> sus.salary;

	return(sus);

}
// ����� ���������� �� �������
void helicopter(abobus sus) {
	cout << "ID: " << sus.id<< endl;
	cout << "�������: " << sus.age << endl;
	cout << "��������: " << sus.salary<< endl;
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