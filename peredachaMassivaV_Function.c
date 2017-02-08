#include <stdio.h>
#include <locale.h>
#define DAYS_COUNT 7

											//Передача массива в функцию

void printArray(int mas[],int count);

int main()
{
	setlocale(LC_ALL, "RUS");
	int mas[] = { 123, 584, 458, 987 };
	int const masCount = sizeof(mas) / sizeof(int);
	printArray(mas,masCount);

	return 0;
}
void printArray(int mas[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("mas[%i] = %i\n",i,mas[i]);
	}
}
