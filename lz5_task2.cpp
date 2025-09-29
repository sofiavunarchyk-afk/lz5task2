#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 12;   // кількість членів послідовності
    int a[N];           // масив для збереження значень

    a[0] = 1;
    a[1] = 2;

    for (int i = 2; i < N; i++) {
        a[i] = a[i - 1] - a[i - 2];
    }

    // Вивід усіх 12 елементів
    cout << "12 елементів послідовності:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}
