// lab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Анискович Анна Кирилловна 668401

#include <iostream>
#include <vector>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int N, M;
	cout << "Введите количество строк N=";
	cin >> N;
	
	cout << "Введите количество столбцов М=";
	cin >> M;

    if (N <= 0|| M <= 0) {
		cout << "Ошибка" << endl;
	}
	while (!cin)
	{
		cout << "Попробуй еще раз!\n";
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> N >> M;
	}
	

	int** matrix = new int* [N];
	for (int i = 0; i < N; ++i) {
		matrix[i] = new int[M];
	}
	cout << "Введите элементы массива(" << N << "x" << M << "):" << endl;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j)
		{
			cout << " matrix[ " << i  << " ] [ " << j  << " ] =  ";
			cin >> matrix[i][j];

		}
	}
	int* b = new int[M];
	for (int j = 0; j < M; ++j) {
		b[j] = 0;
		for (int i = 0; i < N; ++i) {
			if (matrix[i][j] != 0) {
				b[j] = 1;
				break;
			}
		}
	}
	cout << "\nFinal matrix:\n";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n Полученный вектор b :";
	for (int j = 0; j < M; ++j) {
		cout << b[j] << "";
	}
	cout << endl;
	delete[] b;
	for (int i = 0; i < N; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}




