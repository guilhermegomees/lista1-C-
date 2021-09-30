#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Altere o programa anterior para mostrar no final a soma dos números.
    */

    int num1, num2, soma;

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &num1);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &num2);

    soma = 0;

    printf("\nINTERVALO DOS NUMEROS\n");
    for(int i = num1 + 1; i < num2; i++)
    {
        printf("\t%d\n", i);
        soma = soma + i;
    }

    printf("\nSOMA DOS NUMEROS: %i\n", soma);

}