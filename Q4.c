#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int a, b;
    int x, n;
    int i;

    a = 0;
    b = 1;

    printf("Digite um numero:");
    scanf("%d", &n);

    printf("Sequencia de fibonacci: \n%d \n", b);


    for ( i = 0; i < n; i++ ){

        x = a + b;
        a = b;
        b = x;

        printf("%d \n", x);

    }

  return 0;

}


