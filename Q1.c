#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int idade;
    float valor;
    float vfinal;
    float desconto;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("\n");

    printf("Digite o valor do sapato:");
    scanf("%f", &valor);

    if (idade <= 18){

        desconto = valor * 0.1;

        printf("Desconto de 10%: %0.2f", desconto);

        vfinal = valor - desconto;

        printf("\n");

        printf("O valor final e: %0.2f", vfinal);

    }

    if (idade > 18){

        desconto = valor * 0.2;

        printf("Desconto de 20%: %0.2f", desconto);

        vfinal = valor - desconto;

        printf("\n");

        printf("O valor final e: %0.2f", vfinal);


    }

    return 0;

}
