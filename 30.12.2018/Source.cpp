#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#include <chrono>
#include <thread>

void task4()
{
	printf("�� ������� ������������� �����\n");
	printf("������� ������������� ����� = ");
	int n;
	scanf_s("%d", &n);
	for (size_t i = n; i < 5; i++)
	{
		printf("%d\n", i);
	}
}

void task3()
{
	int d;
	printf("������� - ������� �������� ����� �� 11 �� 99\n");
	for (size_t i = 11; i < 100; i++)
	{
		d = pow(i, 2);
		printf("%d\n", d);
	}
}

void task2()
{
	printf("���� ��� ��� ����� 4, ������ ��� 2 � 3 �� ��������\n");
	int N;
	printf("N(N>10) = ");
	scanf_s("%d", &N);

	for (size_t i = 10; i <= N; i++)
	{
		if ((i % 2 == 1) && (i % 5 == 0))
		{
			printf("%d\n", i);
		}
	}
}

void task1()
{
	int A, B;
	printf("A(A<B) = ");
	scanf_s("%d", &A);
	printf("B(B>A) = ");
	scanf_s("%d", &B);
	int count = 0;

	for (size_t i = A; i <= B; i++)
	{
		printf("%d\n", i);
		count++;
	}
	printf("%d\n", count);
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}