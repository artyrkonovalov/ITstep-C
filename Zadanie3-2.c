#include <stdio.h>
#include <locale.h>

/*Задание 1
Пользователь вводит четырехзначное число.Необходимо поменять в этом числе 1 и 2
цифры, а также 3 и 4 цифры.Если пользователь вводит не четырехзначное число –
вывести сообщение об ошибке.*/

int main()
{
	setlocale(LC_ALL, "rus");

	int userChislo;

	printf("Введите четырехзначное число:\n");
	scanf("%i", &userChislo);

	int chislo1 = userChislo % 10000 / 1000;
	int chislo2 = userChislo % 1000 / 100;
	int chislo3 = userChislo % 100 / 10;
	int chislo4 = userChislo % 10;

	if (userChislo >= 10000 || userChislo <= 999)
	{
		if (userChislo <= 999)
		{
			printf("Ошибка! Ваше число меньше четырехзначного.\n");
			return 1;
		}
		if (userChislo >= 10000)
		{
			printf("Ошибка! Ваше число больше четырехзначного.\n");
			return 1;
		}
	}
	else
	{
		printf("%i %i %i %i\n", chislo1, chislo2, chislo3, chislo4);
	}
	printf("%i%i%i%i\n", chislo2, chislo1, chislo4, chislo3);

		/*Задание 2
		Грузовой самолет должен пролететь с грузом из пункта А в пункт С через пункт В.
		Емкость бака для топлива у самолета – 300литров.Потребление топлива на 1 км в
		зависимости от веса груза у самолета следующее :
		-до 500 кг : 1 литров / км
		- до 1000 кг : 4 литров / км
		- до 1500 кг : 7 литров / км
		- до 2000 кг : 9 литров / км.
		- более 2000 кг – самолет не поднимает.
		Пользователь вводит расстояние между пунктами А и В, и расстояние между пунктами В
		и С, а также вес груза.Программа должна рассчитать какое минимальное количество
		топлива необходимо для дозаправки самолету в пункте В, чтобы долететь из пункта А в
		пункт С.В случае невозможности преодолеть любое из расстояний – программа должна
		вывести сообщение о невозможности полета по введенному маршруту.*/
		
	double distantAb;
	double distantBc;
	double weight;

	double maxLitr500 = 300 / 1;
	double maxLitr1000 = 300 / 4;
	double maxLitr1500 = 300 / 7;
	double maxLitr2000 = 300 / 9;

	printf("Введите растояние от пункта A до пункта B:\n");
	scanf("%lf", &distantAb);
	printf("Введите растояние от пункта B до пункта C:\n");
	scanf("%lf", &distantBc);
	printf("Введите вес груза:\n");
	scanf("%lf", &weight);

	if (weight >= 2001)
	{
		printf("Самолет не поднимет введенный груз");
		return 1;
	}
	else if (weight <= 500)
	{
		if (distantAb > maxLitr500)
		{
			printf("Расстояние из пункта А в пункт B слишком большое, самолет не долетит.\n");
			return 1;
		}
		else if (distantBc > maxLitr500)
		{
			printf("Расстояние из пункта B в пункт C слишком большое, самолет не долетит.\n");
			return 1;
		}
		else
		{
			printf("Количество топлива, для того чтобы долететь из пункта А в пункта С: %5.2lfл\n", (distantAb + distantBc) * 1);
			printf("Минимальное количество топлива для дозаправки в пункте B: %5.2lfл\n", distantAb / 1);
		}
	}
	else if (weight <= 1000 && weight >= 501)
	{
		if (distantAb > maxLitr1000)
		{
			printf("Расстояние из пункта А в пункт B слишком большое, самолет не долетит.\n");
			return 1;
		}
		else if (distantBc > maxLitr1000)
		{
			printf("Расстояние из пункта B в пункт C слишком большое, самолет не долетит.\n");
			return 1;
		}
		else
		{
			printf("Количество топлива, для того чтобы долететь из пункта А в пункта С: %5.2lfл\n", (distantAb + distantBc) * 4);
			printf("Минимальное количество топлива для дозаправки в пункте B: %5.2lfл\n", distantAb * 4);
		}
	}
	else if (weight <= 1500 && weight >= 1001)
	{
		if (distantAb > maxLitr1500)
		{
			printf("Расстояние из пункта А в пункт B слишком большое, самолет не долетит.\n");
			return 1;
		}
		else if (distantBc > maxLitr1500)
		{
			printf("Расстояние из пункта B в пункт C слишком большое, самолет не долетит.\n");
			return 1;
		}
		else
		{
			printf("Количество топлива, для того чтобы долететь из пункта А в пункта С: %5.2lfл\n", (distantAb + distantBc) * 7);
			printf("Минимальное количество топлива для дозаправки в пункте B: %5.2lfл\n", distantAb * 7);
		}
	}
	else if (weight <= 2000 && weight >= 1501)
	{
		if (distantAb > maxLitr2000)
		{
			printf("Расстояние из пункта А в пункт B слишком большое, самолет не долетит.\n");
			return 1;
		}
		else if (distantBc > maxLitr2000)
		{
			printf("Расстояние из пункта B в пункт C слишком большое, самолет не долетит.\n");
			return 1;
		}
		else
		{
			printf("Количество топлива, для того чтобы долететь из пункта А в пункта С: %5.2lfл\n", (distantAb + distantBc) * 9);
			printf("Минимальное количество топлива для дозаправки в пункте B: %5.2lfл\n", distantAb * 9);
		}
	}
	/*Задание 3
Зарплата менеджера составляет 200$ + процент от продаж, продажи до 500$ - 3%, от 500
до 1000 – 5%, свыше 1000 – 8%. Пользователь вводит с клавиатуры уровень продаж для
трех менеджеров. Определить их зарплату, определить лучшего менеджера, начислить
ему премию 200$, вывести итоги на экран*/
	double const salary = 200;
	double const bonus = 200;

	double manager1sale;
	double manager2sale;
	double manager3sale;

	double const percentage500 = 3;
	double const percentage1000 = 5;
	double const percentageB1000 = 8;

	printf("Введите уровень продаж менеджера №1 в долларах:\n");
	scanf("%lf", &manager1sale);
	printf("Введите уровень продаж менеджера №2 в долларах:\n");
	scanf("%lf", &manager2sale);
	printf("Введите уровень продаж менеджера №3 в долларах:\n");
	scanf("%lf", &manager3sale);

	double precentSale1;
	double precentSale2;
	double precentSale3;

	if (manager1sale <= 500)
	{
		precentSale1 = manager1sale / 100 * percentage500;
	}
	else if (manager1sale >= 501 && manager1sale <= 1000)
	{
		precentSale1 = manager1sale / 100 * percentage1000;
	}
	else if (manager1sale >= 1001)
	{
		precentSale1 = manager1sale / 100 * percentageB1000;
	}

	if (manager2sale <= 500)
	{
		precentSale2 = manager2sale / 100 * percentage500;
	}
	else if (manager2sale >= 501 && manager1sale <= 1000)
	{
		precentSale2 = manager2sale / 100 * percentage1000;
	}
	else if (manager2sale >= 1001)
	{
		precentSale2 = manager2sale / 100 * percentageB1000;
	}

	if (manager3sale <= 500)
	{
		precentSale3 = manager3sale / 100 * percentage500;
	}
	else if (manager3sale >= 501 && manager3sale <= 1000)
	{
		precentSale3 = manager3sale / 100 * percentage1000;
	}
	else if (manager3sale >= 1001)
	{
		precentSale3 = manager3sale / 100 * percentageB1000;
	}

	if (manager1sale == manager2sale && manager1sale == manager3sale)
	{
		printf("Лучший менеджер: все менеджеры лучшие. Зарплата каждого: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата каждого: %5.2lf$\n",
			salary, precentSale1, bonus / 3, salary + precentSale1 + (bonus / 3));
	}
	else if (manager1sale == manager2sale && manager1sale > manager3sale)
	{
		printf("Лучший менеджер: Менеджер №1 и Менеджер №2. Зарплата каждого: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата каждого: %5.2lf$\n",
			salary, precentSale1, bonus / 2, salary + precentSale1 + (bonus / 2));
		printf("Менеджер №3. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	else if (manager2sale == manager3sale && manager3sale > manager1sale)
	{
		printf("Лучший менеджер: Менеджер №2 и Менеджер №3. Зарплата каждого: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата каждого: %5.2lf$\n",
			salary, precentSale2, bonus / 2, salary + precentSale2 + (bonus / 2));
		printf("Менеджер №1. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
	}
	else if (manager3sale == manager1sale && manager1sale > manager2sale)
	{
		printf("Лучший менеджер: Менеджер №1 и Менеджер №3. Зарплата каждого: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата каждого: %5.2lf$\n",
			salary, precentSale1, bonus / 2, salary + precentSale1 + (bonus / 2));
		printf("Менеджер №2. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
	}

	if (manager1sale > manager2sale && manager1sale > manager3sale)
	{
		printf("Лучший менеджер: менеджер №1. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата: %5.2lf$\n", salary, precentSale1, bonus, salary + precentSale1 + bonus);
		printf("Менеджер №2. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
		printf("Менеджер №3. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	if (manager2sale > manager1sale && manager2sale > manager3sale)
	{
		printf("Лучший менеджер: менеджер №2. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата: %5.2lf$\n", salary, precentSale2, bonus, salary + precentSale2 + bonus);
		printf("Менеджер №1. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
		printf("Менеджер №3. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	if (manager3sale > manager1sale && manager3sale > manager2sale)
	{
		printf("Лучший менеджер: менеджер №3. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: %5.2lf$\nИтого зарплата: %5.2lf$\n", salary, precentSale3, bonus, salary + precentSale3 + bonus);
		printf("Менеджер №1. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
		printf("Менеджер №2. Зарплата: %5.0lf$ + процент: %5.2lf$ + премия: 0$\nИтого зарплата: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
	}
}
