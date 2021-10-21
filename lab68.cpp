#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "rus");
	cout << "Введите число:" << endl;
	cin >> a;
	c = a * a * a;
	b = c * c;
	a = b * b * c;
	cout << "Ваше число в пятнадцатой степени равно:" << a;
	return 0;
}
