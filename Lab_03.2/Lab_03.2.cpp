// Lab_03.2.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Титиш Ольга
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 23
#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    // спосіб 1: розгалуження в скороченій формі
    if (a < 0 && c != 0)
        F = a*x*x+b*x+c;
    if (a > 0 && c == 0)
        F = -a/(x-c);
    if (!(a < 0 && c != 0)) && !(a > 0 && c == 0)
        F = a*(x+c);
    cout << endl;
    cout << "1) F = " << F << endl;
    // спосіб 2: розгалуження в повній формі
    if (a < 0 && c != 0)
        F = a * x * x + b * x + c;
    else
        (a > 0 && c == 0)
        F = -a / (x - c);
    else
        F = a * (x + c);
    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
