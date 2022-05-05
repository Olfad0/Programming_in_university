#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main()
{
	setlocale(0, "");
	int A[4][4];
	
	//j - столбец; i - строка 
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			cin >> A[j][i];
		}
	}
	
	
	
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			cout << A[j][i]<<" ";
		}
		cout << endl;
	}


	system("pause");
	return(0);
}

