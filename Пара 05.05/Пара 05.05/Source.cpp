#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	setlocale (LC_ALL, "");
	int A[6];
	cout << "¬ведите 6 числел" << endl;
	for (int i = 0; i < 6; i++) {
		cin >> A[i];
	}
	cout << "----------------------------------------------------\n";
	//sizeof(A);
	
	
	
	//cout << sizeof(A)/sizeof(A[1])<< endl;


	
	for (int i = 5; i >= 0; i--) {
		cout << A[i]<<endl;
	}


	system("pause");
	return(0);
	
}