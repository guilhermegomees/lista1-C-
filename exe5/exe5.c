#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Faça um Programa que peça dois números e imprima o maior deles.
    */

    int num1, num2;

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &num1);

    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("\nO NUMERO %d E MAIOR QUE O NUMERO %d", num1, num2);
    } else {
        printf("\nO NUMERO %d E MAIOR QUE O NUMERO %d", num2, num1);
    }
}