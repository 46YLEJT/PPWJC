#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int silnia(int n);
int wyrazCiagu(int n);
int NWD(int a, int b);
int wynik(int i);
int binarka(int z);
int ciagFibanaccego(int n);
int binToDec(int bin, int position);
int F(int x, int n);

int main()
{
	//ZAD1
	printf("Silnia: \n", silnia(4));

	//ZAD2
	printf("Wyrazciagu: \n", wyrazCiagu(8));

	//ZAD 3
	printf("NWD: %d\n", NWD(65, 15));

	//ZAD 4
	for (int i = 2; i <=8; i++)
	{
		printf("Wynik %d: %d", i, wynik(i));
	}

	//ZAD 5
	printf("\nWynik: ");
	binarka(20);

	//ZAD 6
	printf("\nciagFibanaccego: %d", ciagFibanaccego(30));

	//ZAD 7
	printf("\nBintodec: %d", binToDec(1101101,0));

	//ZAD8a
	printf("\n%d", F(2, 10));

	//ZAD 8b 
	printf("\nWynik: %d", F(2, 2));
	printf("\nWynik: %d", F(2, 3));
	printf("\nWynik: %d", F(3, 4));
	printf("\nWynik: %d", F(2, 5));
	printf("\nWynik: %d", F(2, 8));
	printf("\nWynik: %d", F(2, 10));
}

int silnia(int n) {
	if (n == 0 || n == 1) return 1;
	else {
		return n * silnia(n - 1);
	}
}
int wyrazCiagu(int n) {
	if (n == 1) return -1;
	else if (n > 1)
	{
		return -1 * wyrazCiagu(n - 1) * n - 2;
	}
}
int NWD(int a, int b) {
	if (b != 0) return NWD(b, a % b);
	else {
		return a;
	}
}
int wynik(int i) {
	if (i < 3) return 1;
	else if (i % 2 == 0) return wynik(i - 3) + wynik(i - 1) + 1;
	else {
		return wynik(i - 1) % 7;
	}
}
int binarka(int z) {
	if (z > 0)
	{
		binarka(z / 2);
		printf("%d", z % 2);
	}
}
int ciagFibanaccego(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else if (n > 1) return ciagFibanaccego(n - 2) + ciagFibanaccego(n - 1);
}
int binToDec(int bin, int position) {
	if (bin == 0)
		return 0;
	else
		return (bin % 10) * pow(2, position) + binToDec(bin / 10, position + 1);
}
int F(int x, int n) {
	if (n == 1)
	{
		return x;
	}
	else if (n % 3 == 0)
	{
		int k = F(x, n / 3);
		return k * k * k;
	}
	else
	{
		return x * F(x, n - 1);
	}
}
