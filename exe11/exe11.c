#include <stdio.h>
#include <stdlib.h>

void main(){
    /* 
        Faça um programa que receba dois números inteiros e gere os números
        inteiros que estão no intervalo compreendido por eles.
    */

    int num1, num2;

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &num1);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &num2);

    printf("\nINTERVALO DOS NUMEROS (ORDEM CRESCENTE)\n");
    for(int i = num1 + 1; i < num2; i++)
    {
        printf("\t%d\n", i);
    }

    printf("\nINTERVALO DOS NUMEROS (ORDEM DECRESCENTE)\n");
    for(int i = num2 - 1; i > num1; i--)
    {
        printf("\t%d\n", i);
    }
}