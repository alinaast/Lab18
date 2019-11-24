#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int m, i, j, n, k, p = 1, s = 0;
	cout << "Введите порядок матрицы: ";
	cin >> m >> n;
	cout << "Введите k: ";
	cin >> k;
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
		p = p * a[k][j];
		s = s + a[k][j];
	}
	cout << "Произведение равно: " << p << endl;
	cout << "Сумма равна: " << s;
	return 0;
}
