#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float salariob;
    float descontoinss;
    float salarioliq;

    printf("Digite o valor do salario:");
    scanf("%f", &salariob);

    if (salariob <= 420){

        descontoinss = salariob * 0.08;

        printf("O desconto de 8 e: %f", descontoinss);

        printf("\n");

        salarioliq = salariob - descontoinss;

        printf("O salario final e: %0.2f", salarioliq);

    }

    if (salariob > 420 && salariob <= 1350){

        descontoinss = salariob * 0.09;

        printf("O desconto de 9 e: %0.2f", descontoinss);

        printf("\n");

        salarioliq = salariob - descontoinss;

        printf("O salario final e: %0.2f", salarioliq);

    }

    if (salariob > 1350){

        descontoinss = salariob * 0.1;

        printf("O desconto de 10 e: %0.2f", descontoinss);

        printf("\n");

        salarioliq = salariob - descontoinss;

        printf("O salario final e: %0.2f", salarioliq);

    }

    return 0;

}
