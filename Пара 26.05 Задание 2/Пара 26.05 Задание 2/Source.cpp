#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

double hard_stepen(double num, double st) {
	return(exp(st * log(num)));
}


int main() {
	setlocale(0, "");
	double num, st, rez;
	cout << "������� ������������ ����� � ��� ������������ �������\n";
	cin >> num >> st;
	rez = hard_stepen(num, st);

	cout << "���������: " << rez << endl;
	system("pause");
	return(0);
}