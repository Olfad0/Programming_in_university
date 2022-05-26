#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;

double stepen(double num, int st) {
	double num1 = num;
	if (st == 0) return(1);
	
	if (st > 0) {
		for (int i = 1; i < st; i++) {
			num *= num1;
		}
		return(num);
	}
	else {
		st = abs(st);
		for (int i = 1; i < st; i++) {		
			num *= num1;
		}
		return(1 / num);
	}

}
int main() {
	int st;
	double num, rez;
	setlocale(0, "");
	cout << "������� ������������ ����� ������� ������ �������� � �������\n";
	cin >> num;
	cout << "������� �������\n";
	cin >> st;


	rez = stepen(num, st);

	cout << "���������: " << rez << endl;

	system("pause");
	return(0);
}