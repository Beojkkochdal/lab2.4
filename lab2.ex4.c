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

	#define SIZE 10
	int a[SIZE], n = 4, answer, j=1, q=0;

//находим от 1 до 4
	for (int i = 0; i < 4; i++)
	{
		a[i] = matrix[0][i];

	}
	for (int i = 1; i < 4; i++)
	{
		a[i] *= matrix[1][i - 1];
	}
	for (int i = 2; i < 4; i++)
	{
		a[i] *= matrix[2][i - 2];
	}
	for (int i = 3; i < 4; i++)
	{
		a[i] *= matrix[3][i - 3];
	}

//от 4 до 7
	for (int i = 6; i>3; i--)
	{
		a[i] = matrix[3][3-q];
		q++;
	}

	a[5] *= matrix[2][3];
	a[4] *= matrix[1][3];


	a[4] *= matrix[2][2];



//пишем результат
	for (int i = 0; i < 7; i++)
	{
		answer = a[i];
		printf("%d  ", answer);
	}

	_getch();
	return 0;
}