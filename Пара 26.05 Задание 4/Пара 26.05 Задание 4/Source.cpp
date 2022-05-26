#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int fact(int n) {
	if (n == 0) return(1);
	else return(n * fact(n-1));
}
double strashno(double num, int n)
{
	return(pow(num, n) / fact(n));
}

double Exp1(double x, int n) {
	double shlepa = 0;
	for (int i = 0; i < n; i++) {
		shlepa += pow(x, i) / fact(i);
	}
	return(shlepa);
}



int main() {
	setlocale(0, "");
	double x, e, n = 1;
	cout << "¬ведите числа x и n\n";
	cin >> x >> e;

	while (strashno(x, n) > e) {
		n += 1;
	}
	cout << "Exp = " << Exp1(x, n)<<endl;
	cout << exp(x) << endl;
	system("pause");
	return(0);
}