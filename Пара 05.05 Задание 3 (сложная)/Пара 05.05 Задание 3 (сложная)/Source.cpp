#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int N = 0;
	float* A;
	cout << "¬видете число N (размер массива)" << endl;
	cin >> N;
	A = new float[N];
	cout << "¬видете числа в массив" << endl;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		A[i] = pow(A[i], N - i);
	}

	for (int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}

	system("pause");
	return(0);
}