// laba 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Лабораторная работа 3 Анискович А.К 668401

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "RU");
    double a, b, h;
    int n;
    cout << "Введите значение a, b, h, n через пробел ";
        cin >> a >> b >> h >> n;
        cout << "\n-------------------------------------------------------------------------" << endl;
        cout << setw(10) << "x";
        cout << setw(15) << "S(x)";
        cout << setw(15) << "Y(x)";
        cout << setw(15) << "|Y-S|" << endl;
        cout << "---------------------------------------------------------------------------" << endl;


        for (double x = a; x <= b + h / 2; x += h) 
        {
            double Y_x = sin(x);
            double S_x = 0;
            double term = x;
            S_x = term;
            for (int k = 1; k <= n; ++k)
            {
                term *= -(x * x) / ((2.0 * k) * (2.0 * k + 1.0));
                S_x += term;
            }
            cout << fixed << setprecision(4);
            double diff = fabs(Y_x - S_x);
            cout << setw(10) << x;
            cout << setw(15) << S_x;
            cout << setw(15) << Y_x;
            cout << setw(15) << diff << endl;

        }
        cout << "---------------------------------------------------------------------------" << endl;
            
   

    }
   
    