#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	// #1. Заполнение двумерного массива с клавиатуры и его вывод
	int Keyboard[10][10],	// 'Клавиатурный' массив
		K_Size_X,			// Размер по сроке
		K_Size_Y;			// Размер по столбцу
	cout << "Введите размерность массива по строке (от 0 до 10): ";
	cin >> K_Size_X;
	cout << "Введите размерность массива по столбцу (от 0 до 10): ";
	cin >> K_Size_Y;
	cout << "Введите элементы массива: ";
	for (int i = 0; i < K_Size_X; i++)
		for (int j = 0; j < K_Size_Y; j++)
			cin >> Keyboard[i][j];
	cout << "Ваш двумерный массив в 'красивой' обертке: " << endl;	
	for (int i = 0; i < K_Size_X; i++)								//
	{																// ХОЧУ			Пока что так: |1| |2|
		cout << endl;												// КРАСИВЫЙ					  |3| |4|
		for (int j = 0; j < K_Size_Y; j++)							// ВЫВОД
			cout << " | " << Keyboard[i][j] << " | ";				// МАССИВА
		cout << endl;												// 
	}

	// #2. Заполнение двумерного массива с помощью rand и его вывод (Work In Progress)

	system("pause");
}