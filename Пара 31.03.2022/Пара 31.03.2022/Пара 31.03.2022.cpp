#include <iostream>
#include <cstdlib>

using namespace std;

pair <int, int> sw (int a, int b) 
{
	a = a + b;
	b = a - b;
	a = a - b;
	
	return pair <int, int> (a, b);
}


int main() {
	int a = 0, b = 0;
	setlocale(0, "");

	cout << "Введите 2 числовых значения\n";

	cin >> a >> b;
	//  Смена значений по переменным
	/*a = a + b;
	b = a - b;
	a = a - b;   */          

	auto p = sw(a, b);
	cout << p.first << " " << p.second;
	cout << endl;
	system("pause");
}