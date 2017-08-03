#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int n;
    int maior = 0;

    while (1){

        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n == 0){

            printf("O Maior valor foi: %d \n", maior);
            printf("Fim!");
            break;

        }

        printf("\n");

        if ( n > maior){

            maior = n;

            printf("O maior valor e: %d \n", maior);


        } else {

            printf(" O maior valor e: %d \n", maior);

        }

        printf("\n");


    }

    return 0;


}
