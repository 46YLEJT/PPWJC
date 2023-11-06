#include <stdio.h>
#include <stdlib.h>

int main() {

	/*int i = 1;
	printf("while: ");
	while (i <= 5)
	{
		printf("%d ", i);
		i++; //i=i+1
	}


	i = 1;
	printf("\ndo while: ");
	do
	{
		printf("%d ", i);
		i++; //i=i+1
	} while (i <= 5);

	printf("\nfor: ");
	for (int i = 1; i <= 5; i++)
	{
		printf("%d ", i);
	}
	//petle nieskonczone

	while (true)
	{

	}

	do
	{

	} while (true);

	for ( ; ; )
	{

	}*/ //teoria

	/*float liczba, suma = 0, srednia, max;
	int ileLiczb = 0;

	do
	{
		printf("Podaj liczbe: ");
		scanf_s("%f", &liczba);

		if (ileLiczb == 0)			

		{
			max = liczba;
		}
		else
		{
			if (max < liczba)
			{
				max = liczba;
			}
		}
		if (liczba > 0)
		{
			suma += liczba;
			ileLiczb++;
		}
	} while (liczba > 0);

	printf("Suma: %f\n", suma);
	printf("Œrednia: %f\n", suma / ileLiczb);
	printf("Max: %f\n", max);*/
	
	int i, liczba, sumaDodatnie = 0, sumaUjemne = 0, liczbaUjemna = 0, liczbaDodatnia = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Wprowadz liczbe: ");
		scanf_s("%d", &liczba);

		if (liczba >= 0)
		{
			sumaDodatnie += liczba;
			liczbaDodatnia++;
		}
		else
		{
			sumaUjemne += liczba;
			liczbaUjemna++;
		}
	}

	printf("Suma liczb ujemnych i ich ilosc: %d,%d\n", sumaUjemne, liczbaUjemna );
	printf("Suma liczb dodatnich i ich ilosc: %d,%d\n", sumaDodatnie, liczbaDodatnia);

}
