#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, i, j, n, k;
	int p = 1;
	int min = 100000;
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
		for (i = 0; i < n; i++)
			p = p * a[i][j];
		if (p < min)
		{
			min = p;
			k = j;
		}
	}
	cout << "Произведение равно: " << p << endl;
	cout << "Номер столбца: " << k;
	return 0;
}