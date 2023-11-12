#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //ZAD 1

	float liczba, suma = 0, srednia, max;
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
	printf("�rednia: %f\n", suma / ileLiczb);
	printf("Max: %f\n", max);

	//ZAD 2
	
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


    //ZAD 3

    int i, n, suma = 0;

	printf("Podaj wielkosc ciagu n: ");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		if (i%2==0)
		{
			suma+=i;
		}
		
	}

	printf("Suma liczb parzystych wynosi: %d", suma);
	
	return 0;

    //ZAD 4

     int i, losowaLiczba, suma = 0, n;

     srand(time(NULL));

    printf("Podaj wielkosc ciagu n: ");
    scanf("%d", &n);
    
    printf("Wylosowane liczby:\n");

    for ( i = 0; i < n; i++)
    {
        losowaLiczba = rand() % 56 - 10;

        printf("%d ", losowaLiczba);

        if (losowaLiczba % 2 ==0)
        {
            suma += losowaLiczba;
        }
        
    }
        printf("\nSuma liczb parzystych wynosi: %d",suma);

	
	return 0;

    //ZAD 5

    int n = 0, liczbaStudentow, i = 0;
    float srednia = 0, suma = 0, liczbaPunktow;

    printf("Podaj liczbe studentow grupy laboratoryjnej: ");
    scanf("%d", &liczbaStudentow);

    while (n<liczbaStudentow)
    {
        printf("Podaj liczbe punktow studenta %d: ",i=i+1);
        scanf("%f", &liczbaPunktow);
        suma+=liczbaPunktow;
        n++;
    }

    printf("Srednia ocen wszystkich studentow wynosi: %f",srednia=suma/liczbaStudentow);
    

    //ZAD 6

    int i;

    printf("Od 1 do 100: ");
    
    for ( i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }
    
    printf("\nOd 100 do 0: ");

    for ( i = 100; i >= 0; i--)
    {
        printf("%d ", i);
    }

    printf("\nCo 7: ");

    for ( i = 7; i <= 77; i=i+7)
    {
        printf("%d ", i);
    }

    printf("\nCo -2: ");

    for ( i = 20; i >= 0; i=i-2)
    {
        printf("%d ", i);
    }

    //ZAD 7

    int i,j,k;

    for ( i = 10; i >= 0; i--)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    
    for ( i = 0; i < 10; i++)
    {   
        for ( j = 0; j < 10 - i; j++)
        {
            printf(" ");
        }
         
        for ( j = 0; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    for ( i = 10; i >= 0; i--)
    {
        for ( j = 0; j < 10 - i; j++)
        {
            printf(" ");
        }
        
        for ( j = 0; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }

     for ( i = 0; i < 10; i++)
    {   
        for ( j = 0; j < 10 - i; j++)
        {
            printf(" ");
        }
         
        for ( j = 0; j <= i; j++)
        {
            printf("X");
        }

        for (k = 0; k <= i; k++) {
            printf("X");
        }

        printf("\n");

        
    }
}