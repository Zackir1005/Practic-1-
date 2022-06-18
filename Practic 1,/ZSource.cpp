#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 2
	cout << "  \"Lorem ipsum\" dolor sit amet,         \n";
	cout << "   consectetur adipiscing elit,           \n";
	cout << "   sed do eiusmod tempor incididunt       \n";
	cout << "   ut labore et dolore magna aliqua.      \n";
	cout << "     / \\/ \\Lorem ipsum original/ \\/ \\ \n";
	//Задача 3
	const float Pi = 3.14;
	float r, h, V;
	cout << "\nВведите высоту цилиндра: ";
	cin >> h;
	cout << "Введите радиус цилиндра: ";
	cin >> r;
	V = Pi * r * r * h;
	cout << "Объём цилиндра = " << V << "\n\n";
	//Задача 4
	int m1, m2;
	cout << "Введите расстояние между 2 городами (в метрах): ";
	cin >> m1;
	cout << "Введите расстояние, которое вы прошли (в метрах): ";
	cin >> m2;
	int m3 = m1 - m2;
	int km = m3 / 1000;
	cout << "Осталось пройти " << km << " киллометров и " << m3 % 1000 << " метров" << "\n\n";
	//Задача 5
	int kg, g;
	cout << "Введите массу мешка муки (в кг): ";
	cin >> kg;
	cout << "Введите расход муки в день (в граммах): ";
	cin >> g;
	int d;
	if (g > 1000)
		d = kg / (g / 1000);
	else
		d = kg / (g % 1000);
	cout << "Через " << d << " дней (дня) у вас закончится мука!" << "\n\n";

	return 0;
}