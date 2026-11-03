// Лаба1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Лабораторная работа 1 Анискович Анна 668401

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, z, t, a, b;
    const double pi = 3.14159;
    cout << "Zadaii x="; cin >> x;
    cout << "Zadaii y=";cin >> y;
    cout << "Zadaii z=";cin >> z;
    a = 2 * cos(x - pi / 6);
    a = a / (0.5 + pow(sin(y), 2));
    b = 1 + (pow(z, 2) / (3 - pow(z, 2) / 5));
    t = a * b;
    cout << "Resault t=" << t << endl;
}

