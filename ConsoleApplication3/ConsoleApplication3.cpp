#include <iostream>
using namespace std;

double add2(double D)
{
    cout << (3.14 * (D*D));
    return(0);
}

double add(double R, double R2)
{

    cout << (3.14 * ((R*R) - (R2*R2)));
    return(0);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double r;
    double r2;
    int s = 1;
    do {
        cout << "Введите действие";
        cout << "\n1. Площадь круга";
        cout << "\n2. Площадь кольца";
        cout << "\n3. Выйти из программы";
        cout << "\n";
        cin >> s;
        if (s == 1)
        {
            cout << "Введите радиус круга";
            cout << "\n";
            cin >> r;
            double w2(add2(r));
            cout << w2 << endl;


        }
        else if (s == 2)
        {
            cout << "Введите внутренний радиус\n";
            cin >> r;
            cout << "Введите внешний радиус\n";
            cin >> r2;
            cout << "\n";
            double w(add(r, r2));
            cout << w << endl;
        }
        cout << "\n";
    } while (s != 3);
}


