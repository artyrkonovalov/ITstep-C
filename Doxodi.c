//Пользователь вводит прибыль фирмы за год(12 месяцев).Затем пользователь
//вводит диапазон(например, 3 и 6 – поиск между 3 - м и 6 - м месяцем).Необходимо
//определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль
//была минимальна с учетом выбранного диапазона.

#include <stdio.h>
#include <locale.h>

int funkciaDlaMaxZnachenia(int massivPribileIliYbitkovPredpiiatia[], int nachaloPoiska, int konecPoiska);
int funkciaDlaMinZnachenia(int massivPribileIliYbitkovPredpiiatia[], int nachaloPoiska, int konecPoiska);


int main()
{
	int massivPribileIliYbitkovPredpiiatia[12];
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 12; i++)
	{
		printf("Введите пожалуйста доход за %i месяц : ", i + 1);
		massivPribileIliYbitkovPredpiiatia[i];
		scanf("%i", &massivPribileIliYbitkovPredpiiatia[i]);
	}


	int nachaloPoiska;
	int konecPoiska;
	printf("Задайте начало диапозона: ");
	scanf("%i", &nachaloPoiska);
	printf("Задайте конец диапозона: ");
	scanf("%i", &konecPoiska);
	if (nachaloPoiska < 1 || nachaloPoiska > 12 || konecPoiska > 12 || konecPoiska < 1)
	{
		printf("Ошибка ввода значений.\n");
		return 0;
	}
	else if (nachaloPoiska > konecPoiska)
	{
		printf("Мы обнаружили, что начало диапозона больше его конца. Зачения были исправлены в ходе программы местами.\n");
		int chisloDlaZameniMestami = nachaloPoiska;
		nachaloPoiska = konecPoiska;
		konecPoiska = chisloDlaZameniMestami;
	}

	printf("Максимальная прибыль за данный период была: %i\n", funkciaDlaMaxZnachenia(massivPribileIliYbitkovPredpiiatia, nachaloPoiska, konecPoiska));

	printf("Минимальная прибыль за данный период была: %i\n", funkciaDlaMinZnachenia(massivPribileIliYbitkovPredpiiatia, nachaloPoiska, konecPoiska));
}

int funkciaDlaMaxZnachenia(int massivPribileIliYbitkovPredpiiatia[], int nachaloPoiska, int konecPoiska)
{
	int max = massivPribileIliYbitkovPredpiiatia[nachaloPoiska];
	for (int i = nachaloPoiska - 1; i < konecPoiska; i++)
	{
		if (max < massivPribileIliYbitkovPredpiiatia[i])
		{
			max = massivPribileIliYbitkovPredpiiatia[i];
		}
	}
	return max;
}

int funkciaDlaMinZnachenia(int massivPribileIliYbitkovPredpiiatia[], int nachaloPoiska, int konecPoiska)
{
	int min = massivPribileIliYbitkovPredpiiatia[nachaloPoiska];
	for (int i = nachaloPoiska - 1; i < konecPoiska; i++)
	{
		if (min > massivPribileIliYbitkovPredpiiatia[i])
		{
			min = massivPribileIliYbitkovPredpiiatia[i];
		}
	}
	return min;
}
