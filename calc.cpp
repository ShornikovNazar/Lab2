#include <iostream>
#include <math.h>
//#include <windows.h>
using namespace std;

int main()
{
    //SetConsoleOutputCP(1251);
    int  o;
    double x, y;
    cout << "Введіть числа" << endl;
    cin >> x >> y;
    cout << "Оберіть операцію з числами:\n" << "1. +\n" << "2. -\n" << "3. *\n" << "4. /\n"<<"5. x^y\n\n";
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
        cout << x << " / " << y << " = " << x / y << endl;
        break;
    case (5):
        cout << x << " ^ " << y << " = " << pow(x, y) << endl;
    default:
        cout << "Жодної операції не обрано. Помилка."<<endl;
        break;
    }
    return 0;
}