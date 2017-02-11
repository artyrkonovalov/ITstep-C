#include <stdio.h>
#include <locale.h>
#include <Windows.h>


enum Menu
{
	FiguraA = 1,
	FiguraB,
	FiguraC,
	FiguraD,
	FiguraE,
	FiguraF,
	FiguraG,
	FiguraH,
	FiguraK
};


int main()
{
	
	/*
	Вывести на экран фигуры, заполненные звездочками. Диалог с пользователем реализовать
при помощи меню.
	*/
	char simvol = 219;
	
	for (int i = 0; i < 100; i++)
	{
		printf("%c", simvol);
		Sleep(50);		
		}
	system("cls");

	setlocale(LC_ALL, "Rus");
	enum Menu menu;
	printf("Выберите пункт меню: \n");
	printf("1 - Фигура А: \n");
	printf("2 - Фигура Б: \n");
	printf("3 - Фигура В: \n");
	printf("4 - Фигура Г: \n");
	printf("5 - Фигура Д: \n");
	printf("6 - Фигура Е: \n");
	printf("7 - Фигура Ж: \n");
	printf("8 - Фигура З: \n");
	printf("9 - Фигура И: \n");

	

	scanf("%i", &menu);
	
	switch (menu)
	{
	case FiguraA:
		
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraB:

		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (int i = 6; i > 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}

		printf("\n");
		break;
	case FiguraC:
		for (int i = 12; i > 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraD:
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 12; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraE:
		for (int i = 12; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 12; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraF:
		for (int i = 6; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraG:
		for (int i = 6; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j <= 6; j++)
			{
				printf("*");
			}
			for (int j = 6; j > 12; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraH:
		for (int i = 0; i <= 6; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j <= 6; j++)
			{
				printf("*");
			}
			for (int j = 6; j > 12; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		break;
	case FiguraK:

		
		for (int i = 6; i >= 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j <= 6; j++)
			{
				printf("*");
			}
			for (int j = 6; j > 12; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (int i = 0; i <= 6; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = i; j <= 6; j++)
			{
				printf("*");
			}
			for (int j = 6; j > 12; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 6; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");


		break;
	default:
		break;
	}
	
	return 0;
}
