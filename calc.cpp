#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    SetConsoleOutputCP(1251);
    int  o;
    double x, y;
    cout << "Введіть числа" << endl;
    cin >> x >> y;
    cout << "Оберіть операцію з числами:\n" << "1. +\n" << "2. -\n" << "3. *\n" << "4. /\n\n";
    cin >> o;
    switch (o)
    {
    case (1):
        cout << x << " + " << y << " = " << x + y << endl;
        break;
    case (2):
        cout << x << " - " << y << " = " << x - y << endl;
        break;
    case (3):
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    case (4):
        
        break;
    default:
        cout << "Жодної операції не обрано. Помилка.";
        break;
    }
    return 0;
};
