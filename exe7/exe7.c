#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Faça um Programa que peça um número inteiro e determine se ele é par
        ou impar. Dica: utilize o operador módulo (resto da divisão).
    */

    int num;

    printf("INFORME O NUMERO: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nPAR\n");
    }
    else{
        printf("\nIMPAR\n");
    }
}