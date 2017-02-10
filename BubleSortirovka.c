#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

//Сортировка пузырком
//n - количество
//проходов - (n-1)
//i - номер прохода
//0...(n-1-i) - проход


void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	int array[SIZE];
	int kol_vo=0;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 100;
		printf("%i ", array[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE-1; ++i)
	{
		for (int j = 0; j < SIZE-i-1; j++) 
		{
			if (array[j] > array[j + 1]) 
			{
				int t = array[j + 1];
				array[j + 1] = array[j];
				array[j] = t;
				kol_vo++;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i ", array[i]);
		
	}
	printf("\n");
	printf("Количество перестановок = %i\n", kol_vo);
}
