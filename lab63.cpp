#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	setlocale(LC_ALL, "rus");
	cout << "Введите переменные a,b,c:" << endl;
	cin >> a >> b >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << "Теперь переменная а равна:" << a << endl << "Переменная b:" << b << endl << "Переменная c:" << c;
	return 0;
}
