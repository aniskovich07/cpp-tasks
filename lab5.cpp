// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Лабораторная работа 5 Анискович Анны 668401

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand (time(0));

	int n;
	cout << "Введите размер массива n=";
	cin >> n;

	
	while (!cin)
	{
		cout << "Попробуй еще раз!\n";
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> n;
	}
		if (n <= 0) {
		cout << "Ошибка" << endl;
	}
		int* a = new int[n];

		int choice;
		cout<< "Способ ввода: 1 - вручную, 2 - random: ";
		cin >> choice;

		if (choice == 1) {
			for (int i = 0; i < n; i++) {
				cout << "a[" << i << "] = ";
				cin >> a[i];
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				a[i] = rand() % 100 - 50; 
			}
		}
		cout << "\nМассив: ";
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;

		int iMin = 0, iMax = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] > a[iMax]) { iMax = i; }
		}
		for (int i = 1; i < n; i++) {
			if (a[i] < a[iMin]) { iMin = i; }
		}
		cout << "Максимум: a[" << iMax << "]=" << a[iMax] << endl;
		cout << "Минимум: a[" << iMin << "]=" << a[iMin] << endl;

		if (iMin > iMax) swap(iMin, iMax);
		if (iMax - iMin <= 1) {
			cout << "Между min and max нет элементов" << endl;
		}
		else {
			long long product = 1;
			for (int i = iMin + 1; i < iMax; i++){
				product *= a[i];
			cout << "Произведение между max и min = " << product << endl;
		}

		}


}


