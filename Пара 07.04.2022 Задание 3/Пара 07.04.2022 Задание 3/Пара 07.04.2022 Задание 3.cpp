#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    float x = 0, y = 0, z = 0, a = 0, k = 0, b = 0;
    cout << "Введите значения x, a, k, b\n";
    cin >> x >> a >> k >> b;

    y = sqrt(1 + pow(x, 2));
    z = a + sin(k * x + b);
    
    if (y > z) 
        cout << "Число y больше числа z и оно равно: " << y << endl;
    else
        cout << "Число z больше числа y и оно равно: " << z << endl;

    system("pause");
    return(0);
}

