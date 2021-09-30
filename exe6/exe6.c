#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Faça um Programa que peça um valor e mostre
        na tela se o valor é positivo ou negativo.
    */

    int num;

    printf("INFORME O NUMERO: ");
    scanf("%d", &num);

    if(num >= 0) {
        printf("\nPOSITIVO\n");
    }
    else{
        printf("\nNEGATIVO\n");
    }
}