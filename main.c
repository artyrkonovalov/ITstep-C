#include <stdio.h>
#include <locale.h>

/*������� 1
������������ ������ �������������� �����.���������� �������� � ���� ����� 1 � 2
�����, � ����� 3 � 4 �����.���� ������������ ������ �� �������������� ����� �
������� ��������� �� ������.*/

int main()
{
	setlocale(LC_ALL, "rus");

	int userChislo;

	printf("������� �������������� �����:\n");
	scanf("%i", &userChislo);

	int chislo1 = userChislo % 10000 / 1000;
	int chislo2 = userChislo % 1000 / 100;
	int chislo3 = userChislo % 100 / 10;
	int chislo4 = userChislo % 10;

	if (userChislo >= 10000 || userChislo <= 999)
	{
		if (userChislo <= 999)
		{
			printf("������! ���� ����� ������ ���������������.\n");
			return 1;
		}
		if (userChislo >= 10000)
		{
			printf("������! ���� ����� ������ ���������������.\n");
			return 1;
		}
	}
	else
	{
		printf("%i %i %i %i\n", chislo1, chislo2, chislo3, chislo4);
	}
	printf("%i%i%i%i\n", chislo2, chislo1, chislo4, chislo3);

		/*������� 2
		�������� ������� ������ ��������� � ������ �� ������ � � ����� � ����� ����� �.
		������� ���� ��� ������� � �������� � 300������.����������� ������� �� 1 �� �
		����������� �� ���� ����� � �������� ��������� :
		-�� 500 �� : 1 ������ / ��
		- �� 1000 �� : 4 ������ / ��
		- �� 1500 �� : 7 ������ / ��
		- �� 2000 �� : 9 ������ / ��.
		- ����� 2000 �� � ������� �� ���������.
		������������ ������ ���������� ����� �������� � � �, � ���������� ����� �������� �
		� �, � ����� ��� �����.��������� ������ ���������� ����� ����������� ����������
		������� ���������� ��� ���������� �������� � ������ �, ����� �������� �� ������ � �
		����� �.� ������ ������������� ���������� ����� �� ���������� � ��������� ������
		������� ��������� � ������������� ������ �� ���������� ��������.*/
		
	double distantAb;
	double distantBc;
	double weight;

	double maxLitr500 = 300 / 1;
	double maxLitr1000 = 300 / 4;
	double maxLitr1500 = 300 / 7;
	double maxLitr2000 = 300 / 9;

	printf("������� ��������� �� ������ A �� ������ B:\n");
	scanf("%lf", &distantAb);
	printf("������� ��������� �� ������ B �� ������ C:\n");
	scanf("%lf", &distantBc);
	printf("������� ��� �����:\n");
	scanf("%lf", &weight);

	if (weight >= 2001)
	{
		printf("������� �� �������� ��������� ����");
		return 1;
	}
	else if (weight <= 500)
	{
		if (distantAb > maxLitr500)
		{
			printf("���������� �� ������ � � ����� B ������� �������, ������� �� �������.\n");
			return 1;
		}
		else if (distantBc > maxLitr500)
		{
			printf("���������� �� ������ B � ����� C ������� �������, ������� �� �������.\n");
			return 1;
		}
		else
		{
			printf("���������� �������, ��� ���� ����� �������� �� ������ � � ������ �: %5.2lf�\n", (distantAb + distantBc) * 1);
			printf("����������� ���������� ������� ��� ���������� � ������ B: %5.2lf�\n", distantAb / 1);
		}
	}
	else if (weight <= 1000 && weight >= 501)
	{
		if (distantAb > maxLitr1000)
		{
			printf("���������� �� ������ � � ����� B ������� �������, ������� �� �������.\n");
			return 1;
		}
		else if (distantBc > maxLitr1000)
		{
			printf("���������� �� ������ B � ����� C ������� �������, ������� �� �������.\n");
			return 1;
		}
		else
		{
			printf("���������� �������, ��� ���� ����� �������� �� ������ � � ������ �: %5.2lf�\n", (distantAb + distantBc) * 4);
			printf("����������� ���������� ������� ��� ���������� � ������ B: %5.2lf�\n", distantAb * 4);
		}
	}
	else if (weight <= 1500 && weight >= 1001)
	{
		if (distantAb > maxLitr1500)
		{
			printf("���������� �� ������ � � ����� B ������� �������, ������� �� �������.\n");
			return 1;
		}
		else if (distantBc > maxLitr1500)
		{
			printf("���������� �� ������ B � ����� C ������� �������, ������� �� �������.\n");
			return 1;
		}
		else
		{
			printf("���������� �������, ��� ���� ����� �������� �� ������ � � ������ �: %5.2lf�\n", (distantAb + distantBc) * 7);
			printf("����������� ���������� ������� ��� ���������� � ������ B: %5.2lf�\n", distantAb * 7);
		}
	}
	else if (weight <= 2000 && weight >= 1501)
	{
		if (distantAb > maxLitr2000)
		{
			printf("���������� �� ������ � � ����� B ������� �������, ������� �� �������.\n");
			return 1;
		}
		else if (distantBc > maxLitr2000)
		{
			printf("���������� �� ������ B � ����� C ������� �������, ������� �� �������.\n");
			return 1;
		}
		else
		{
			printf("���������� �������, ��� ���� ����� �������� �� ������ � � ������ �: %5.2lf�\n", (distantAb + distantBc) * 9);
			printf("����������� ���������� ������� ��� ���������� � ������ B: %5.2lf�\n", distantAb * 9);
		}
	}
	/*������� 3
�������� ��������� ���������� 200$ + ������� �� ������, ������� �� 500$ - 3%, �� 500
�� 1000 � 5%, ����� 1000 � 8%. ������������ ������ � ���������� ������� ������ ���
���� ����������. ���������� �� ��������, ���������� ������� ���������, ���������
��� ������ 200$, ������� ����� �� �����*/
	double const salary = 200;
	double const bonus = 200;

	double manager1sale;
	double manager2sale;
	double manager3sale;

	double const percentage500 = 3;
	double const percentage1000 = 5;
	double const percentageB1000 = 8;

	printf("������� ������� ������ ��������� �1 � ��������:\n");
	scanf("%lf", &manager1sale);
	printf("������� ������� ������ ��������� �2 � ��������:\n");
	scanf("%lf", &manager2sale);
	printf("������� ������� ������ ��������� �3 � ��������:\n");
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
		printf("������ ��������: ��� ��������� ������. �������� �������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� �������� �������: %5.2lf$\n",
			salary, precentSale1, bonus / 3, salary + precentSale1 + (bonus / 3));
	}
	else if (manager1sale == manager2sale && manager1sale > manager3sale)
	{
		printf("������ ��������: �������� �1 � �������� �2. �������� �������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� �������� �������: %5.2lf$\n",
			salary, precentSale1, bonus / 2, salary + precentSale1 + (bonus / 2));
		printf("�������� �3. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	else if (manager2sale == manager3sale && manager3sale > manager1sale)
	{
		printf("������ ��������: �������� �2 � �������� �3. �������� �������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� �������� �������: %5.2lf$\n",
			salary, precentSale2, bonus / 2, salary + precentSale2 + (bonus / 2));
		printf("�������� �1. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
	}
	else if (manager3sale == manager1sale && manager1sale > manager2sale)
	{
		printf("������ ��������: �������� �1 � �������� �3. �������� �������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� �������� �������: %5.2lf$\n",
			salary, precentSale1, bonus / 2, salary + precentSale1 + (bonus / 2));
		printf("�������� �2. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
	}

	if (manager1sale > manager2sale && manager1sale > manager3sale)
	{
		printf("������ ��������: �������� �1. ��������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� ��������: %5.2lf$\n", salary, precentSale1, bonus, salary + precentSale1 + bonus);
		printf("�������� �2. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
		printf("�������� �3. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	if (manager2sale > manager1sale && manager2sale > manager3sale)
	{
		printf("������ ��������: �������� �2. ��������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� ��������: %5.2lf$\n", salary, precentSale2, bonus, salary + precentSale2 + bonus);
		printf("�������� �1. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
		printf("�������� �3. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale3, salary + precentSale3);
	}
	if (manager3sale > manager1sale && manager3sale > manager2sale)
	{
		printf("������ ��������: �������� �3. ��������: %5.0lf$ + �������: %5.2lf$ + ������: %5.2lf$\n����� ��������: %5.2lf$\n", salary, precentSale3, bonus, salary + precentSale3 + bonus);
		printf("�������� �1. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale1, salary + precentSale1);
		printf("�������� �2. ��������: %5.0lf$ + �������: %5.2lf$ + ������: 0$\n����� ��������: %5.2lf$\n", salary, precentSale2, salary + precentSale2);
	}
}
