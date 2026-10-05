// Lab_04_2.cpp 
// Самотуга Андрій
// Лабораторна робота № 4.7
//  Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 25
#include <iostream>
#include <iomanip> 
#include <cmath> 
using namespace std;

int main()
{
    double xp, xk, x, dx, eps, a, R, S;
    int n;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;

    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "log((1+x)/(1-x))" << "   |"
        << setw(7) << "S" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;

    while (x <= xk) {
        n = 0;
        a = 2*x;
        S = a;

        do {
            n++;
            R = x * x * (2.0 * n - 1) / (2.0 * n + 1);
            a *= R;
            S += a;
        } while (abs(a) >= eps);
        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << log((1+x)/(1-x)) << "   |"
            << setw(10) << setprecision(5) << S << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}

