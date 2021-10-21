// lab6_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    setlocale(LC_ALL, "rus");
    cout << "Введите переменные a и b:"<<endl;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "Переменная а равна: "<<a<<endl<<"Переменная b равна: "<<b;
    
    return 0;
}
