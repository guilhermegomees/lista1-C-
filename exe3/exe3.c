#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Faça um programa para a leitura de duas notas parciais de um aluno. O
        programa deve calcular a média alcançada por aluno e apresentar:
            • A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
            • A mensagem "Reprovado", se a média for menor do que sete;
    */

    float nota1, nota2, media=0.0, soma=0.0;

    printf("INFORME A NOTA 1: ");
    scanf("%f", &nota1);

    printf("INFORME A NOTA 2: ");
    scanf("%f", &nota2); 
    system("cls");

    soma = nota1 + nota2;
    media = soma / 2;

    if(media >= 7){
        printf("APROVADO\n");
    }
    else{
        printf("REPROVADO\n");
    }
}