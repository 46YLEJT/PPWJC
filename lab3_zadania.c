#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //ZAD 1
    // int tab[10];
    // int lenght = sizeof(tab) / sizeof(tab[0]);
    // int x = 3;

    // printf("Elementy tablicy 3,6,9,...: ");

    // for (int i = 0; i < lenght; i++)
    // {
    //     tab[i]= x;
    //     printf("%d ", tab[i]);
    //     x+=3;
    // }

    //ZAD 2

    // int tab[10];
    // int lenght = sizeof(tab) / sizeof(tab[0]);
    // int x = 3;

    // printf("Elementy tablicy 3,9,15,...: ");

    // for (int i = 0; i < lenght; i+=2)
    // {
    //     tab[i]= x;
    //     printf("%d ", tab[i]);
    //     x+=3;
    // }

    //ZAD 3

    // int tab[10];
    // int lenght = sizeof(tab) / sizeof(tab[0]);
    // int a = 0,x = 0;

    // printf("Podaj wartosc a: ");
    // scanf("%d", &a);

    // for (int i = 0; i < lenght; i++)
    // {
    //     tab[i]= a - x;
    //     printf("%d ", tab[i]);
    //     x+=5;
    // }
    
    //ZAD 4
    
    // int tab[10];
    // int lenght = sizeof(tab) / sizeof(tab[0]);
    // int losowaLiczba, min = tab[0];

    // srand(time(NULL));

    // for (int i = 0; i < lenght; i++)
    // {
    //     tab[i]= losowaLiczba;
    //     printf("%d ", tab[i]);
    //     losowaLiczba= rand() % 50 -23 ;

    //     if(tab[i] < min)
    //     {
    //         min = tab[i];
    //     } 
    // }
    
    // printf("%d", min);
    
    //ZAD 5

    // int tab[10];
    // int lenght = sizeof(tab) / sizeof(tab[0]);

    // scanf("%d %d", &tab[0], &tab[1]);

    // for (int i = 2; i < lenght; i++)
    // {
    //     tab[i] = tab[i - 2] + tab[i - 1];
    // }

    // for (int i = 0; i < lenght; i++)
    // {
    //     printf("%d ", tab[i]);
    // }

    //ZAD 6

    // int tab[20] = {1,2,3,4,5,6,7,8,9,10};
    // int lenght = sizeof(tab) / sizeof(tab[0]);

    // for (int i = 10; i < lenght; i++)
    // {
    //     tab[i] = tab[i - 10];
    // }

    // for (int i = 0; i < lenght; i++)
    // {
    //     printf("%d ", tab[i]);
    // }
    
    //ZAD 7

    // int suma = 0;
    // int macierz[3][3];

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         macierz[i][j] = i * 3 + j + 2;
    //     }
    // }

    // printf("Macierz:\n");
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d\t", macierz[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         if (i == j)
    //         {
    //            suma+=macierz[i][j];
    //         }
            
    //     }
    // }

    // printf("\nSuma przekatnej macierzy wynosi: %d", suma);

    //ZAD 8

    // int macierzSuma[3][3];
    // int macierz1[3][3], macierz2[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     macierz1[i][j] = i * 4 + j + 3;
    //  }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     macierz2[i][j] = i * 2 + j + 2;
    //  }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     printf("%d\t", macierz1[i][j]);
    //  }
    //  printf("\n");
    // }

    // printf("\n\n");

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     printf("%d\t", macierz2[i][j]);
    //  }
    //  printf("\n");
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     macierzSuma[i][j] = macierz1[i][j] + macierz2[i][j];
    //  }
    // }
    
    // printf("\n\nSuma macierzy 1 i 2: \n");

    // for (int i = 0; i < 3; i++)
    // {
    //  for (int j = 0; j < 3; j++)
    //  {
    //     printf("%d\t", macierzSuma[i][j]);
    //  }
    //  printf("\n");
    // }

    

    return 0;

}