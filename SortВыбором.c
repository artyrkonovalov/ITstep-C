#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define MAS_SIZE 10

void vivodMassiva(int array[], int lengthArray);
void sortSelection(int array[], int lengthArray);
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	int lengthArray = MAS_SIZE;
	int array[MAS_SIZE];
	for (int i = 0; i < MAS_SIZE; i++)
	{
		array[i] = rand() % 100;
	}
	vivodMassiva(array, lengthArray);
	sortSelection(array, lengthArray);
	return 0;
}
void vivodMassiva(int array[], int lengthArray)
{
	for (int i = 1; i < lengthArray; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
}
void sortSelection(int array[], int lengthArray)
{
	for (int i = 0; i < lengthArray - 1; i++) {
		
		int minindex = i;
		
		for (int j = i + 1; j < lengthArray; j++) {
			if (array[j] < array[minindex]) {
				minindex = j;
			}
		}
		if (minindex != i)
		{
			int temp = array[i];
			array[i] = array[minindex];
			array[minindex] = temp;
		}
	}
	for (int i = 1; i < lengthArray; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
}
