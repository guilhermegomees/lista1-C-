#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Faça um Programa que pergunte quanto você ganha por hora e o número
        de horas trabalhadas no mês. Calcule e mostre o total do seu salário no
        referido mês, sabendo-se que são descontados 11% para o Imposto de
        Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
            a. salário bruto.
            b. quanto pagou ao INSS.
            c. quanto pagou ao sindicato.
            d. o salário líquido.
            e. calcule os descontos e o salário líquido, conforme a tabela abaixo:

            + Salario Bruto : R$
            - IR (11%): R$
            - INSS (8%): R$
            - Sindicato (5%): R$
            = Salario Liquido : R$
    */

	float salarioHora, salarioBruto, inss, sindicato, salarioLiquido, imposto;
    int horasTrab;

    printf("INFORME O QUANTO VOCE GANHA POR HORA: ");
    scanf("%f", &salarioHora);
    system("cls");

    printf("INFORME QUANTAS HORAS VOCE TRABALHA POR DIA: ");
    scanf("%d", &horasTrab);
    system("cls");

    salarioBruto = horasTrab * salarioHora * 30;
    imposto = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - imposto - inss - sindicato;

    printf("SALARIO BRUTO: R$ %.2f\n", salarioBruto);
    printf("VALOR DO IMPOSTO DE RENDA: R$ %.2f\n", imposto);
    printf("VALOR DO INSS: R$ %.2f\n", inss);
    printf("VALOR PARA O SINDICATO: R$ %.2f\n", sindicato);
    printf("SALARIO LIQUIDO: R$ %.2f\n", salarioLiquido);
}	
