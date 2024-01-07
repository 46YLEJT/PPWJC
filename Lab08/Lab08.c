#include <stdio.h>
#include <stdlib.h>

// Zadanie 1
void printVariableAddress(int* variable) {
    printf("Adres zmiennej: %p\n", (void*)variable);
}

void printVariableValueAndAddress(int* variable) {
    printf("Wartosc zmiennej: %d, Adres zmiennej: %p\n", *variable, (void*)variable);
}

void calculateDifference(int* num1, int* num2) {
    printf("Roznica: %d\n", *num1 - *num2);
}

void calculateAverage(int* num1, int* num2, int* num3) {
    printf("Srednia: %.2f\n", (*num1 + *num2 + *num3) / 3.0);
}

// Zadanie 2
void printArrayElementAddress(int* array, int index) {
    printf("Adres elementu %d: %p\n", index, (void*)(array + index));
}

void generateRandomValuesAndPrintAddresses(int* array, int size, int min, int max) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (max - min + 1) + min;
        printf("Wartosc elementu %d: %d, Adres: %p\n", i, array[i], (void*)(array + i));
    }
}

// Zadanie 3
void calculateAndPrintAverageAndGreater(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    double average = (double)sum / size;
    printf("Srednia: %.2f\n", average);

    printf("Elementy wieksze od sredniej: ");
    for (int i = 0; i < size; ++i) {
        if (array[i] > average) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}

// Zadanie 4
void squareByReference(int* num) {
    *num *= *num;
}

// Zadanie 5
int* powerByReference(int* num, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= *num;
    }

    int* resultPointer = (int*)malloc(sizeof(int));
    *resultPointer = result;

    return resultPointer;
}

// Zadanie 6
void printCharMultipleTimes(char* character, int* count) {
    for (int i = 0; i < *count; ++i) {
        printf("%c", *character);
    }
    printf("\n");

    (*count)--;
}

// Zadanie 7
int getMinValue(int* num1, int* num2) {
    return (*num1 < *num2) ? *num1 : *num2;
}

int* getMinValuePointer(int* num1, int* num2) {
    return (*num1 < *num2) ? num1 : num2;
}

// Zadanie 8
void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Przykłady użycia dla każdego zadania

    // Zadanie 1
    int variable = 42;
    int num1 = 10, num2 = 5, num3 = 8;
    printVariableAddress(&variable);
    printVariableValueAndAddress(&variable);
    calculateDifference(&num1, &num2);
    calculateAverage(&num1, &num2, &num3);

    // Zadanie 2
    int array[5];
    printArrayElementAddress(array, 0);
    printArrayElementAddress(array, 3);
    generateRandomValuesAndPrintAddresses(array, 5, 1, 10);

    // Zadanie 3
    int numbers[] = { 2, 5, 8, 10, 15 };
    calculateAndPrintAverageAndGreater(numbers, 5);

    // Zadanie 4
    int baseNumber = 6;
    squareByReference(&baseNumber);
    printf("Kwadrat liczby: %d\n", baseNumber);

    // Zadanie 5
    int exponent = 3;
    int* resultPointer = powerByReference(&baseNumber, exponent);
    printf("%d^%d = %d\n", baseNumber, exponent, *resultPointer);
    free(resultPointer);

    // Zadanie 6
    char character = '*';
    int count = 5;
    printCharMultipleTimes(&character, &count);

    // Zadanie 7
    int x = 15, y = 10;
    printf("Mniejsza liczba: %d\n", getMinValue(&x, &y));
    printf("Adres mniejszej liczby: %p\n", (void*)getMinValuePointer(&x, &y));

    // Zadanie 8
    swapValues(&x, &y);
    printf("Po zamianie: x = %d, y = %d\n", x, y);

    return 0;
}