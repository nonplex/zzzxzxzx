#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	double y;
	double z;
	//Вещественные числа
	cout << "x = "; cin >> x;
	//Запрос вещественного числа х
	cout << "y = "; cin >> y;
	//Запрос вещественного числа y
	cout << "z = "; cin >> z;
	//Запрос вещественного числа z
	double x1 = abs(x - z);
	double x2 = abs(x - y);
	double y1 = abs(y - x);
	double y2 = abs(y - z);
	double z1 = abs(z - x);
	double z2 = abs(z - y);
	double arr[] = { x1, x2, y1, y2, z1, z2 };
	//Создание массива с переменными
	pair<double*, double*> minmax = minmax_element(begin(arr), end(arr));
	//cout << "Минимальная  длина " << *(minmax.first) << endl;
	cout << "Расстояние между минимальным и максимальным значением " << *(minmax.second) << endl;
	return 0;
}
