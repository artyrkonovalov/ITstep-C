#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define SIZE 20

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int array[SIZE];
	int lengthArray = SIZE;

	for (int i = 0; i < lengthArray; i++)
	{
		array[i] = rand() % 100;
		printf("Введенный массив: %i\n", array[i]);
	}
	printf("\n");
	for (int i = 0; i < lengthArray; i++)
	{
		int a = array[i];
		int j = i;
		while (j > 0 && array[j - 1] > a)
		{
			array[j] = array[j - 1];
			j = j - 1;
		}
		array[j] = a;
	}

	for (int i = 0; i < lengthArray; i++)
	{
		printf("Отсортированный массив методом ВСТАВКИ %i\n", array[i]);
	}
	printf("\n");

	return 0;
}
