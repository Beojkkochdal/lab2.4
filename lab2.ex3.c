#include<stdio.h>
#include<malloc.h>
#define C 1000

int main()
{
    int L = 0, n, num, zero, a, b = 0, c, d, e;
    int A[C];

    printf("n =  ");
    scanf_s("%i", &n);

    for (int i = 0; i < n; i++) //��������� ������
    {
        printf("number: ");
        scanf_s("%i", &num);
        if (num % 2 == 0)
        {
            b++;
            if (b == 2)
            {
                A[i] = 1;
                b = 0;
                i++;
                n++;
            }
        }
        A[i] = num;
    }

    //������� ��������� ������������� �������
    b = 0;
    for (int i = n - 1; L >= 0; i--)
    {
        if (A[i] < 0)
        {
            L = A[i];
        }
    }

    //��������� ����� ������ ������ ������ ��������� ��������� ������������� �������
    for (int i = 0; i < n; i++)
    {        
        if (A[i] % 2 == 0)
        {
            b++;
            if (b == 2)
            {
                A[i - 1] = L;
                b = 0;
            }
        }

    }

    //������� ����
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            b = i;
            n--;
            for (int b = i; b < n; b++)
            {
                A[b] = A[b + 1];
            }
        }
    }

    //����� ��������� 
    printf("\n Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", A[i]);
    }


    return 0;
}