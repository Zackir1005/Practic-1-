#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//������ 2
	cout << "  \"Lorem ipsum\" dolor sit amet,         \n";
	cout << "   consectetur adipiscing elit,           \n";
	cout << "   sed do eiusmod tempor incididunt       \n";
	cout << "   ut labore et dolore magna aliqua.      \n";
	cout << "     / \\/ \\Lorem ipsum original/ \\/ \\ \n";
	//������ 3
	const float Pi = 3.14;
	float r, h, V;
	cout << "\n������� ������ ��������: ";
	cin >> h;
	cout << "������� ������ ��������: ";
	cin >> r;
	V = Pi * r * r * h;
	cout << "����� �������� = " << V << "\n\n";
	//������ 4
	int m1, m2;
	cout << "������� ���������� ����� 2 �������� (� ������): ";
	cin >> m1;
	cout << "������� ����������, ������� �� ������ (� ������): ";
	cin >> m2;
	int m3 = m1 - m2;
	int km = m3 / 1000;
	cout << "�������� ������ " << km << " ����������� � " << m3 % 1000 << " ������" << "\n\n";
	//������ 5
	int kg, g;
	cout << "������� ����� ����� ���� (� ��): ";
	cin >> kg;
	cout << "������� ������ ���� � ���� (� �������): ";
	cin >> g;
	int d;
	if (g > 1000)
		d = kg / (g / 1000);
	else
		d = kg / (g % 1000);
	cout << "����� " << d << " ���� (���) � ��� ���������� ����!" << "\n\n";

	return 0;
}