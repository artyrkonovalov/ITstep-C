#include <stdio.h>
void main()
{
	float R1 = 2;
	float R2 = 4;
	float R3 = 8;
	float R0 = 1.142857;
	float k;
	float l;
	printf("Zadanie 1: Vicheslit' soprotivlenie po formule:\n \t\t 1/R0=1/R1+1/R2+1/R3\n");
	k = (1 / R1) + (1 / R2) + (1/R3);
	printf("Soprativlenie pravoi 4asti formyli = %1.6f\n" ,k);
	l = 1 / R0;
	printf("Soprativlenie levoi 4asti formyli = %1.6f\n\n\n\n", l);
	float pi = 3.14;
	float L=10;
	float S;
	float R;
	printf("Zadanie 2: Po zadannoi dlinne okryznosti naiti ploschat' kryga po formyle:\n\t S=pi*R^2\n, i naiti radiys iz formyli dlinni okrysnosnosti:\n\t L=2*pi*R\n");
	R = L / (2 * pi); //naxosdenie radiysa
	printf("Radiys raven = %1.5f\n", R);
	S = pi*(R*R); // naxosdenie ploschadi
	printf("Ploschad' kryga ravna = %1.5f\n\n\n\n", S);
	float v=2;
	float a=7;
	float t=3;
	float D;
	printf("Zadanie 3: Vi4eslit' proidennoe rasstoianie pri pramolineinom ravnoyskorennom dvisenii po formyle:\n\t S=v*t+(a*t^2)/2\n");
	D = v*t + (a*(t*t)) / 2;
	printf("Rasstoianie ravno = %1.5f\n\n",D);
}
