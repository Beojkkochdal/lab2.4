#include <stdio.h>
#include <conio.h>

int main(void)
{
	#define SIZE 100
	int n, summ=0, mul=1, v, q, q2, d=0;
	int a[SIZE];

	printf("n = "); scanf_s("%d", &n);

	if (n <= 0 || n > SIZE)
	{
		printf("n out of range\n");
		return 0;
	}
//вносим элементы в массив
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &v);
		a[i] = v;
	}
//заменяем отрицательные элементы на квадрат и проверяем последовательность на убывание
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			if (d == 0)
			{
				q = a[i] * a[i];

				if (a[i + 1] < 0)
				{
					q2 = a[i + 1] * a[i + 1];
				}
				else
				{
					q2 = a[i + 1];
				}

				if (q < q2)
				{
					d = 0;
				}
				else
				{
					d = 1;
				}
			}
		}
	}
//если проверенная последовательность неубывающая, то суммируем элементы, иначе - перемножаем
	if (d == 0)
	{
		for (int i = 0; i < n; i++)
		{
			summ += a[i];
		}
		printf(" summ = %d", summ);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			mul *= a[i];
		}
		printf("multiplication = %d", mul);
	}

	_getch();
	return 0;
}



