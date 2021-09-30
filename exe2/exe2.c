#include <stdio.h>
#include <stdlib.h>

void main(){
    /*
        Faça um programa para uma loja de tintas. O programa deverá pedir o
        tamanho em metros quadrados da área a ser pintada. Considere que a
        cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta
        é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário
        a quantidades de latas de tinta a serem compradas e o preço total.
    */

    float areaM2, quantLitros, quantLatas, precoTotal;
    
    printf("INFORME OS METROS QUADRADOS DA AREA A SER PINTADA: ");
    scanf("%f", &areaM2);

    quantLitros = areaM2 / 3;
    quantLatas = quantLitros / 18;
    precoTotal = quantLatas * 80;
    
    float partInt = (int) quantLatas;
    float partDecim = quantLatas - partInt;

    if(partDecim >= 0.5){
        quantLatas = partInt + 1;
        precoTotal = quantLatas * 80;
    }
    else if(partDecim < 0.5){
        quantLatas = partInt;
        precoTotal = (partInt * 80) + 50;
        printf("\nQUANTIDADE DE LATAS DE 10L: %.0f LATA(S)", quantLatas);
    }

    printf("\nQUANTIDADE DE LATAS DE 18L: %.0f LATA(S)", quantLatas);
    printf("\nQUANTIDADE DE LITROS: %.0f LITROS", quantLitros);
    printf("\nPRECO TOTAL: R$ %.2f", precoTotal);

    return 0;

}