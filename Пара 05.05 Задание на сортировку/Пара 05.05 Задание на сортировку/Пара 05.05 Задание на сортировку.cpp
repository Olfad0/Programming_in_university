#include <iostream>
#include <cstdlib>
#include <random>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int A[10];
    cout << "Генерация случайных чисел и занисение их в массив" << endl;
    for (int i = 0; i < 10; i++) {
        A[i] = rand();
    }
    for (int i = 0; i < 10; i++) {
       cout<< A[i]<<" ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 9; j > i; j--) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    system("pause");
    return(0);
}

