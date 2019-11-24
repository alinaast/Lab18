#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, i, j, n, k;
	int h = 0;
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
		if (a[i][j] % 2 == 1)
			{
			h = 1;
			k = j;
			}
			else
			h = 0;
		if (h == 1)
		{
			cout << "Номер первого из столбцов, содержащих только нечетные числа = ";
			cout << k;
			return 0;
		}
		else
		{
			cout << 0;
			return 0;
		}
	}
}