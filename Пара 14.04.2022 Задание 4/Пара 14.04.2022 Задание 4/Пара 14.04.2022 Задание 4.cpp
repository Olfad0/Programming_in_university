#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i = 0, k = 10;

	setlocale(0, "");
	do
	{
		k -= 1;
		i += 1;
		do
		{
			k -= 1;
			cout << " ";
			do
			{
				cout << "*";
			} while (i <10-k);
		} while (k>0);
		cout<<endl;
	} while (k>0);


	system("pause");
	return(0);
}