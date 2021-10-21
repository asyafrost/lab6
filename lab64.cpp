// lab64.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{

	//y = 3x6 − 6x2 − 7 
	setlocale(LC_ALL, "rus");
	cout << "Введите число х:" << endl;
	int x;
	double y;
	cin >> x;
	y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
	cout << "Число у равно:" << y;

	return 0;

}

