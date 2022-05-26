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

double hard_stepen(double num, double st) {
	return(exp(st * log(num)));
}

int main() {
	double num,st, rez, st_ch;
	setlocale(0, "");
	cout << "������� ������������ ����� ������� ������ �������� � �������\n";
	cin >> num;
	cout << "������� �������\n";
	cin >> st;
	for (int i = 0; i <= st; i++) {
		st_ch = i;
	}
	if (st - st_ch != 0) {
		rez = hard_stepen(num, st);
	}
	else {
		rez = stepen(num, st);
	}

	cout << "���������: " << rez << endl;

	system("pause");
	return(0);
}