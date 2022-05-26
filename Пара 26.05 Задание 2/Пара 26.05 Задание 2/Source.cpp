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
	cout << "¬ведите вещественное число и его вещественную степень\n";
	cin >> num >> st;
	rez = hard_stepen(num, st);

	cout << "–езультат: " << rez << endl;
	system("pause");
	return(0);
}