#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Faça um programa que leia 5 números e 
        informe a soma e a média dos números.
    */

    int num1, num2, num3, num4, num5, soma;
    float media;

    printf("INFORME 5 NUMEROS: \n\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);

    soma = num1 + num2 + num3 + num4 + num5;
    media = soma / 5;

    printf("\nSOMA: %d", soma);
    printf("\nMEDIA: %.1f", media);
}