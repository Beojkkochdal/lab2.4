#include <stdio.h>
#include <conio.h>

int main(void)
{
	#define SIZE 100
	int n, v, p1, p2, q, answer;
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
//находим максимальный и минимальный
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			p2 = i; 
		}
		if (min >= a[i])
		{
			min = a[i];
			p1 = i;
		}	
	}
 
	for (int i = p1+1; i < p2;)
	{
		if (a[i-1] != 0)
		{
			q = a[i];
			a[i] = -1*q;
			i++;
		}
		i++;
	}

	for (int i = 0; i < n; i++)
	{
		answer = a[i];
		printf("%d  ", answer);
	}

	_getch();
	return 0;
}