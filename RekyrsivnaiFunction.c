#include <stdio.h>
#include <locale.h>

/*Задание 1
Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых
чисел*/

int naitiMaxComDiv(int a, int b);

int main()
{
	setlocale(LC_ALL,"RUS");
	int a;
	int b;

	printf("Ввести число А от 1 до 100:\n");
	scanf("%i", &a);

	printf("Ввести число В от 1 до 100:\n");
	scanf("%i", &b);

	printf("Максимальный общий делитель чисел %i и %i = %i\n", a, b, naitiMaxComDiv(a, b));
}

int naitiMaxComDiv(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return naitiMaxComDiv(b, a % b);
	}
}
