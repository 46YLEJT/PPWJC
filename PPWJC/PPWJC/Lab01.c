#include <stdio.h>

//Funkcja main

int main()
{
    //printf("witj");
    //Deklaracja zmiennych
    //int intA, intB, a = 3; //%d
    //float b = 3.14; //%f
    //double C = 3.13413123;  //%lf
    //char znak = 'a'; // %c, %s
    //long long1 = 11111111111111111;
    //short shortA = 1;

    //printf("Liczba ca³kowita: %d", a); // ctrl + d
    //printf("\nLiczba float: %f", b);
    //printf("\nLiczba double: %lf", C);
    //printf("\nZnak: %c", znak);

    /* printf("Podaj liczbe: ");
    scanf_s("%d", &intB);
    printf("\nWczytana liczba z klawiatury: %d", intB);
    if (intB > 0) {
        printf("\nLiczba dodatnia");
    }
    else if (intB == 0)
    {
        printf("\nWartoœæ liczby wynosi 0");
    }
    else
    {
        printf("\nliczba ujemna");
    }

    switch (intB)
    {
    case 1: printf("wybrano 1");
        break;
    case 2: printf("wybrano 2");
        break;
    case 3: printf("wybrano 3");
        break;
    default:
        printf("opcja która wykonuje sie w przypadku nie spelnienia innych warunkow");
        break;
    } */

    //printf("Numer albumu : 131381");

    //int intA;
    //printf("\nPodaj liczbe:");
    //scanf("%d", &intA);

    //if (intA % 2 == 0)
    //    printf("Liczba parzysta");
    //else
    //{
    //    printf("Liczba nieparzysta");
    //}
    //float intB, intC;
    //printf("\nPodaj liczbe 1:");
    //scanf("%f", &intB);
    //printf("\nPodaj liczbe 2:");
    //scanf("%f", &intC);
    //if (intB > intC)
    //{
    //    printf("Liczba pierwsza jest wieksza");
    //}
    //else
    //{
    //    printf("Liczba druga jest wieksza");
    //}


/*    float D, E, F, G;
printf("\nPodaj liczbe 1:");
scanf("%f", &D);
printf("\nPodaj liczbe 2:");
scanf("%f", &E);
printf("\nPodaj liczbe 3:");
scanf("%f", &F);
printf("\nPodaj liczbe 4:");
scanf("%f", &G);
float srednia = (D + E + F + G) / 4;
printf("\nLiczba arytmetyczna podanych liczb wynosi %f" % srednia);
*/

//Kalkulator//

    float liczbaA, liczbaB, suma;
    int wybor;
    printf("podaj pierwsza liczbe: ");
    scanf_s("%f", &liczbaA);
    printf("podaj druga liczbe: ");
    scanf_s("%f", &liczbaB);

    printf("wybierz: 1.dodawanie 2.odejmowanie 3.mnozenie 4.dzielenie\n");
    scanf_s("%d", &wybor);

    switch (wybor)
    {
    case 1:
        suma = liczbaA + liczbaB;
        printf("\nwynik: %f", suma);
        break;
    case 2:
        suma = liczbaA - liczbaB;
        printf("\nwynik: %f", suma);
        break;
    case 3:
        suma = liczbaA * liczbaB;
        printf("\nwynik: %f", suma);
        break;
    case 4:
        suma = liczbaA / liczbaB;
        printf("\nwynik: %f", suma);
        break;
    default:
        printf("wybrales zla opcje :(");
        break;
    }



}