#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        Faça um programa que peça uma nota, entre zero e dez. Mostre uma
        mensagem caso o valor seja inválido e continue pedindo até que o
        usuário informe um valor válido.
    */

    int num;

    printf("INFORME UMA NOTA ENTRE 0 E 10: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 10){
        system("cls");
        printf("\nNOTA VALIDA!");
    }
    else{
        system("cls");
        printf("NOTA INVALIDA!\n\n");
        main();
    }
}