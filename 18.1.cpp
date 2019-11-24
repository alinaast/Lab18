#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int M, i, j, k;
	cout << "Введите порядок матрицы: ";
	cin >> M;
	int** a = new int* [M];
	for (i = 0; i < M; i++)
		a[i] = new int[M];
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
		{
			cout << "Введите A[" << i << "][" << j << "]: ";
		cin >> a[i][j];
		}
	for (k = 0; k < (M / 2 + 1); k++)
	{
		for (i = k; i < M - k; i++)
		{
			cout << a[i][k] << " ";
		}
		i--;
		for (j = k + 1; j < M - k; j++)
		{
		cout << a[i][j] << " ";
		}
		j--;
		for (i = M - k - 2; i >= k; i--)
		{
			cout << a[i][j] << " ";
		}
		i++;
		for (j = M - k - 2; j > k; j--)
		{
			cout << a[i][j] << " ";
		}
		j++;
	}
	return 0;
}