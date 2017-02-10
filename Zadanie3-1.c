#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	/*Задание 1
	Пользователь вводит с клавиатуры целое шестизначное число\n. Написать программу,
	которая определяет, является ли введенное число\n – счастливым (Счастливым считается
	шестизначное число\n, у которого сумма первых 3 цифр равна сумме вторых трех цифр).
	Если пользователь ввел не шестизначное число\n – сообщение об ошибке.
	*/
	int chisloUser = 0;
	printf("Введите шестизначное число = ");
	scanf("%i", &chisloUser);
	int chislo1 = chisloUser / 100000;
	int chislo2 = (chisloUser / 10000) % 10;
	int chislo3 = (chisloUser / 1000) % 10;
	int chislo4 = (chisloUser / 100) % 10;
	int chislo5 = (chisloUser / 10) % 10;
	int chislo6 = chisloUser % 10;
	int chislo123 = chislo1 + chislo2 + chislo3;
	int chislo456 = chislo4 + chislo5 + chislo6;

	if (chislo123 == chislo456)
	{
		printf("Вы загадали счастливое число\n\n");
	}
	else
		printf("Вы загадали несчастливое число\n\n");


	/*Задание 2
	Пользователь вводит с клавиатуры 7 целых чисел. Напишите программу, которая
	определяет максимальное из этих 7 чисел (Подсказка – решение должно быть простым).
	*/
	int dopChislo = 0;

	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;
	int numberFour = 0;
	int numberFive = 0;
	int numberSix = 0;
	int numberSeven = 0;
	printf("Введите 1 число\n");
	scanf("%i", &numberOne );
	printf("Введите 2 число\n");
	scanf("%i", &numberTwo);
	printf("Введите 3 число\n");
	scanf("%i", &numberThree);
	printf("Введите 4 число\n");
	scanf("%i", &numberFour);
	printf("Введите 5 число\n");
	scanf("%i", &numberFive);
	printf("Введите 6 число\n");
	scanf("%i", &numberSix);
	printf("Введите 7 число\n");
	scanf("%i", &numberSeven);

	if (numberOne  > dopChislo)
	{
		dopChislo = numberOne ;
	}

	if (numberTwo > dopChislo)
	{
		dopChislo = numberTwo;
	}

	if (numberThree > dopChislo)
	{
		dopChislo = numberThree;
	}

	if (numberFour > dopChislo)
	{
		dopChislo = numberFour;
	}

	if (numberFive > dopChislo)
	{
		dopChislo = numberFive;
	}

	if (numberSix > dopChislo)
	{
		dopChislo = numberSix;
	}

	if (numberSeven > dopChislo)
	{
		dopChislo = numberSeven;
	}
	printf("Максимальное число %i\n", dopChislo);



}
