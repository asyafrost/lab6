// lab66.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, c;
	setlocale(LC_ALL, "rus");
	cout << "Введите число:" << endl;
	cin >> a;
	c = a * a;
	a = c * c;
	a = a * a;
	cout << "Ваше число в восьмой степени равно:" << a;
	return 0;
}
