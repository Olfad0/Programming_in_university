#include <iostream>
#include <cstdlib>

using namespace std;
int malevich_donbass(int a, int b) {
	
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			 cout << "*";
		}
		cout << endl;
	}
	return(0);
}


int malevich_pust(int a, int b) {
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			if (i == 0 or i == (b - 1)) cout << "*";
			if (i != 0 and i != (b - 1)) {
				if (j != 0 and j != (a - 1)) cout << " ";
				if (j == 0 or j == (a - 1)) cout << "*";

			}
		}
		cout << endl;
	}
	return(0);

}

int main() {
	setlocale(0, "");
	int  width = 0, height = 0;
	cout << "¬ведите ширину и длину пр€моугольника:\n";
	cin >> width >> height;
	malevich_donbass(width, height);
	cout << "=========================================================================\n";
	malevich_pust(width, height);
	system("pause");
	return(0);
}
