#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
        empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total
        das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor,
        calcular e escrever o seu salário total.
    */

    float vendas, comissao, salario;

    printf("INFORME O VALOR DAS VENDAS E O SALARIO FIXO (RESPECTIVAMENTE): \n\n");
    scanf("%f", &vendas);
    scanf("%f", &salario);

    system("cls");

    if(vendas <= 1500){
        comissao = vendas * 0.03;
        printf("SALARIO TOTAL: R$ %.2f\n", comissao + salario);
    }
    else{
        comissao = ((vendas - 1500) + salario) * 0.05;
        printf("SALARIO TOTAL: R$ %.2f\n", comissao + salario);
    }

    printf("TOTAL DAS VENDAS: R$ %.2f\n", vendas);
    printf("SALARIO FIXO: R$ %.2f\n", salario);
    printf("COMISSAO: R$ %.2f\n", comissao);
}