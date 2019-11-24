#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, i, j, n, k;
	double s = 1;
	cout << "Введите порядок матрицы: ";
	cin >> m >> n;
	int** a = new int* [m];
	for (i = 0; i < m; i++)
		a[i] = new int[n];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
		cout << "Введите A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
			s = s * a[i][j];
		for (i = 0; i < m; i++)
			if (s / n < a[i][j])
				cout << "Среднее арифметическое равно: " << s / n << endl << "Элементы: " << a[i][j] << endl;
		s = 1;
	}
	return 0;
}