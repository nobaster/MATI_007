#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	// #1. ���������� ���������� ������� � ���������� � ��� �����
	int Keyboard[10][10],	// '������������' ������
		K_Size_X,			// ������ �� �����
		K_Size_Y;			// ������ �� �������
	cout << "������� ����������� ������� �� ������ (�� 0 �� 10): ";
	cin >> K_Size_X;
	cout << "������� ����������� ������� �� ������� (�� 0 �� 10): ";
	cin >> K_Size_Y;
	cout << "������� �������� �������: ";
	for (int i = 0; i < K_Size_X; i++)
		for (int j = 0; j < K_Size_Y; j++)
			cin >> Keyboard[i][j];
	cout << "��� ��������� ������ � '��������' �������: " << endl;	
	for (int i = 0; i < K_Size_X; i++)								//
	{																// ����			���� ��� ���: |1| |2|
		cout << endl;												// ��������					  |3| |4|
		for (int j = 0; j < K_Size_Y; j++)							// �����
			cout << " | " << Keyboard[i][j] << " | ";				// �������
		cout << endl;												// 
	}

	// #2. ���������� ���������� ������� � ������� rand � ��� ����� (Work In Progress)

	system("pause");
}