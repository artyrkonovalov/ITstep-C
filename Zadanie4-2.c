#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Задание 1
	Нарисовать елку звездочками на экране:
	*
	**
	***
	****
	Высота елки задается с клавиатуры пользователем.*/
	setlocale(LC_ALL, "Rus");
	int visota = 0;
	printf("Введите высоту ёлки \n");
	scanf("%i", &visota);
	for (int i = 0; i < visota; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");			
		}
		printf("\n");
	}


	/*Задание 2
	Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a
	вводится с клавиатуры).*/

	int chislo = 0;
	int count = 0;
	printf("Введите число от 0 до 500\n");
	scanf("%i", &chislo);
	if (chislo < 0 || chislo > 500)
	{
		printf("Вы ввели не верное число\n");
	}
	for (int i = chislo; i <= 500; i++)
	{
		count = count + i;
	}
	printf("%i\n", count);

	/*Задание 3
	Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры: 1 <=a
	<= 20).
	*/

	int znachenie = 0;
	int count1 = 1;
	printf("Введите число от 0 до 20\n");
	scanf("%i", &znachenie);
	if (znachenie < 0 || znachenie > 20)
	{
		printf("Вы ввели не верное число\n");
	}
	for (int i = znachenie; i <= 20; i++)
	{
		count1 = i;		
		count1= count1 * (count1 + 1);		
	}
	printf("%i\n", count1);
}
