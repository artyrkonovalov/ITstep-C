#include <stdio.h>
#include <locale.h>

enum Operator
{
	Mts = 1,
	Velcom,
	Life
};

int main()
{
	/*
	Задание 1
	Пользователь вводит с клавиатуры символ. Определить, какой это символ: Буква, цифра,
	знак препинания или другое.
	*/
	setlocale(LC_ALL, "RUS");
	char simvol;
	printf("Ввести символ\n");
	scanf("%c", &simvol);
	if (simvol >= 'A' && simvol <= 'Z')
	{
		printf("Введена болшая буква\n");
	}
	else if (simvol >= 'a' && simvol <= 'z')
	{
		printf("Введена маленькая буква\n");
	}
	else if (simvol >= '0' && simvol <= '10')
	{
		printf("Ввели цифру\n");
	}
	else if (simvol == '.' || simvol == ',' || simvol == ':' || simvol == ';'
		|| simvol == '!' || simvol == '?' || simvol == '\"' || simvol == '\'')
	{
		printf("Введен знак препенания\n");
	}
	else
	{
		printf("Введен символ\n");
	}



	/*
	Задание 2
	Написать программу подсчета стоимости разговора для разных мобильных операторов.
	Пользователь вводит стоимость разговора и выбирает с какого на какой оператор он
	звонит. Вывести стоимость на экран.
	*/

	enum  Operator operator;
	float stoimost = 0;
	float cenaMinut = 0;
	float cenaDrugieSeti = 0;
	float prodolgitelnost = 0;
	int KudaZvonim = 0;
	printf("Введите название оператора: \n 1 - Mts\n 2 - Velcom\n 3 - Life\n");
	scanf("%i", &operator);
	if (operator < Mts || operator > Life)
	{
		printf("Ввести правельное значение \n");

	}
	printf("Ввести длительность разговора:\n");
	scanf("%f", &prodolgitelnost);
	printf("Ввести куда будем звонить:\n");
	scanf("%i", &KudaZvonim);
	switch (operator)
	{
	case Mts:
		cenaMinut = 15.5;
		cenaDrugieSeti = 17.3;
		if (KudaZvonim = 1)
		{
			printf("%.2f\n", cenaMinut*prodolgitelnost);
		}
		else
			printf("%.2f\n", cenaDrugieSeti*prodolgitelnost);
		break;
	case Velcom:
		cenaMinut = 16.3;
		cenaDrugieSeti = 19.5;
		if (KudaZvonim = 1)
		{
			printf("%.2f\n", cenaMinut*prodolgitelnost);
		}
		else
			printf("%.2f\n", cenaDrugieSeti*prodolgitelnost);
		break;
	case Life:
		cenaMinut = 14.8;
		cenaDrugieSeti = 16.6;
		if (KudaZvonim = 1)
		{
			printf("%.2f\n", cenaMinut*prodolgitelnost);
		}
		else
			printf("%.2f\n", cenaDrugieSeti*prodolgitelnost);
		break;
	default:
		break;
	}



	/*Задание 3
	Написать программу определения названия свадебного юбилея в зависимости от
	продолжительности совместной жизни в браке. Пользователь вводит количество лет в
	годах, а программы вывод, является ли указанный период юбилейным и выводит его
	название в этом случае.
	*/


	int kolichestvoLet = 0;
	printf("Ввести кол-во прожитых лет в годах\n");
	scanf("%i", &kolichestvoLet);
	if (kolichestvoLet == 1)
	{
		printf("УРа!! У вас ситцевая свадба\n");
	}
	else if (kolichestvoLet == 2)
	{
		printf("УРа!! У вас бумажная свадба\n");
	}
	else if (kolichestvoLet == 3)
	{
		printf("УРа!! У вас кожанная свадба\n");
	}
	else if (kolichestvoLet == 4)
	{
		printf("УРа!! У вас льная свадба\n");
	}
	else if (kolichestvoLet == 5)
	{
		printf("УРа!! У вас деревянная свадба\n");
	}
	else if (kolichestvoLet == 6)
	{
		printf("УРа!! У вас чугунная свадба\n");
	}
	else if (kolichestvoLet == 7)
	{
		printf("УРа!! У вас медная свадба\n");
	}
	else if (kolichestvoLet == 8)
	{
		printf("УРа!! У вас жестянная свадба\n");
	}
	else if (kolichestvoLet == 9)
	{
		printf("УРа!! У вас фуансовая свадба\n");
	}
	else if (kolichestvoLet == 10)
	{
		printf("УРа!! У вас оловяная свадба\n");
	}
	else if (kolichestvoLet == 11)
	{
		printf("УРа!! У вас стальная свадба\n");
	}
	else if (kolichestvoLet == 12)
	{
		printf("УРа!! У вас никилевая свадба\n");
	}
	else if (kolichestvoLet == 13)
	{
		printf("УРа!! У вас кружевная свадба\n");
	}
	else if (kolichestvoLet == 14)
	{
		printf("УРа!! У вас агатовая свадба\n");
	}
	else if (kolichestvoLet == 15)
	{
		printf("УРа!! У вас стеклянная свадба\n");
	}
	else if (kolichestvoLet == 18)
	{
		printf("УРа!! У вас бирусовая свадба\n");
	}
	else if (kolichestvoLet == 20)
	{
		printf("УРа!! У вас фарфоровая свадба\n");
	}
	else if (kolichestvoLet == 25)
	{
		printf("УРа!! У вас серебрянная свадба\n");
	}
	else if (kolichestvoLet == 30)
	{
		printf("УРа!! У вас жемчужная свадба\n");
	}
	else if (kolichestvoLet == 34)
	{
		printf("УРа!! У вас янтарная свадба\n");
	}
	else if (kolichestvoLet == 35)
	{
		printf("УРа!! У вас полотняная свадба\n");
	}
	else if (kolichestvoLet == 40)
	{
		printf("УРа!! У вас рубиновая свадба\n");
	}
	else if (kolichestvoLet == 45)
	{
		printf("УРа!! У вас сапфировая свадба\n");
	}
	else if (kolichestvoLet == 46)
	{
		printf("УРа!! У вас лавановая свадба\n");
	}
	else if (kolichestvoLet == 47)
	{
		printf("УРа!! У вас кашемировая свадбаa\n");
	}
	else if (kolichestvoLet == 48)
	{
		printf("УРа!! У вас аметисовая свадба\n");
	}
	else if (kolichestvoLet == 49)
	{
		printf("УРа!! У вас кедровая свадба\n");
	}
	else if (kolichestvoLet == 50)
	{
		printf("УРа!! У вас золотая свадба\n");
	}
	else if (kolichestvoLet == 55)
	{
		printf("УРа!! У вас изумрудная свадба\n");
	}
	else if (kolichestvoLet == 60)
	{
		printf("УРа!! У вас брилиантовая свадба\n");
	}
	else if (kolichestvoLet == 65)
	{
		printf("УРа!! У вас железная свадба\n");
	}
	else if (kolichestvoLet == 70)
	{
		printf("УРа!! У вас благодатная свадба\n");
	}
	else if (kolichestvoLet == 75)
	{
		printf("УРа!! У вас коронная свадба\n");
	}
	else if (kolichestvoLet == 80)
	{
		printf("УРа!! У вас дубовая свадба\n");
	}
	else if (kolichestvoLet == 100)
	{
		printf("УРа!! У вас красная свадба\n");
	}
	else
	{
		printf("У вас не юбилейная дата\n");
	}

	return 0;
}
