#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ��� �����:" << endl;
	cin >> a;
	cin >> b;
	do
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	} while ((a != 0) && (b != 0));
	cout << "���������� ����� ��������: " << a + b << endl;
	system("pause");
}