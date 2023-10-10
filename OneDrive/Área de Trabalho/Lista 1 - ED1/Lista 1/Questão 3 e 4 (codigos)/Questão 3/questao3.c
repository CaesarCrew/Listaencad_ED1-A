#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int varInt = 5;
    char varChar = 'J';
    double varDouble = 50000.0;
    int * pontInt;
    char * pontChar;
    double * pontDouble;

    pontInt = &varInt;
    pontChar = &varChar;
    pontDouble = &varDouble;

    printf("O endere�o da vari�vel char varChar � 0x%X\n", pontChar);
    printf("O endere�o da vari�vel int varInt � 0x%X\n", pontInt);
    printf("O endere�o da vari�vel double varDouble � 0x%X\n", pontDouble);
    printf("O endere�o da vari�vel char* pontChar � 0x%X\n", &pontChar);
    printf("O endere�o da vari�vel int* pontInt � 0x%X\n", &pontInt);
    printf("O endere�o da vari�vel double* pontDouble � 0x%X\n", &pontDouble);

    printf("\nO valor da vari�vel char varChar � %c\n", *pontChar);
    printf("O valor da vari�vel int varInt � %d\n", *pontInt);
    printf("O valor da vari�vel double varDouble � %.1f\n", *pontDouble);
    printf("O valor da vari�vel char* pontChar � 0x%X\n", pontChar);
    printf("O valor da vari�vel int* pontInt � 0x%X\n", pontInt);
    printf("O valor da vari�vel double* pontDouble � 0x%X\n", pontDouble);

    printf("\no tamanho do tipo char � %d bytes\n", sizeof(char));
    printf("o tamanho do tipo int � %d bytes\n", sizeof(int));
    printf("o tamanho do tipo double � %d bytes\n", sizeof(double));
    printf("o tamanho do tipo char* � %d bytes\n", sizeof(char*));
    printf("o tamanho do tipo int* � %d bytes\n", sizeof(int*));
    printf("o tamanho do tipo double* � %d bytes\n", sizeof(double*));

    return 0;
}
