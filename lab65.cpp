#include <iostream>
using namespace std;
int main()
{

	//y = 4(x−3)6 − 7(x−3)3 + 2 
	setlocale(LC_ALL, "rus");
	cout << "Введите число х:" << endl;
	int x;
	double y;
	cin >> x;
	y = 4 * (pow((x-3), 6)) - 7 * (pow((x-3), 3)) +2;
	cout << "Число у равно:" << y;

	return 0;

}