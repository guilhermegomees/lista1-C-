#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Faça um programa que leia 5 números e informe o maior número.
    */

    int i, num, maior, menor;

    printf("DIGITE O 1 NUMERO: ");
    scanf("%i", &num);

    maior = num;
    menor = num;

    for(i = 1; i < 5; i++){
        printf("DIGITE O %d NUMERO: ", i + 1);
        scanf("%i", &num);

        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    }
    printf("\nNUMERO MENOR: %d", menor);
    printf("\nNUMERO MAIOR: %d\n", maior);
} 