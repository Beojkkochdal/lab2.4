#include <stdio.h>
#include <conio.h>

int main(void)
{
	double matrix[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 1, 2, 3},
		{4, 5, 6, 7}
	};

	#define SIZE 4
	int a[SIZE], n = 4, answer;

//определяем восходящую диагональ матрицы
	for (int i = 0; i < 4; i++)
	{
		a[i] = matrix[n-1][i];
		n--;
	}
	for (int i = 0; i < 4; i++)
	{
		answer = a[i];
		printf("%d  ", answer);
	}

	_getch();
	return 0;
}