
// laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Лабараторная работа #2 Анискович А.К 668401

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double c, y, d, a, z, x, phi;
    bool flag = false;
    int function;
    cout << "Zadaii a="; 
    while (!(std::cin >> a))
    {
        std::cout << "Oshibka!\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    cout << "Zadaii z="; 
    while (!(std::cin>>z))
    {
        std::cout << "Oshibka!\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    if (z < 1)
    {
        x = z * z;
    }

    else {
        x = z + 1;
    }
    // Ввод
    do
    {
        std::cout << "choose the function:\n 1.f(x)=2x \n 2.f(x)=x^2 \n 3.f(x)=x/3 \n";
        std::cin >> function;


        switch (function)
        {
        case 1: phi = 2 * x; flag = true;
            break;
        case 2: phi = x * x; flag = true;
            break;
        case 3: phi = x / 3; flag = true;
            break;
        default:
            cout << "mistake!" << endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    } while (!flag);

    c = x*x*x*x*x;
    c = log(1 + c);
    c = a * c;
    d = cos(phi + 1)* cos(phi + 1);
    y = c + d;
    cout << "Rezault y=" << y << endl;
}

