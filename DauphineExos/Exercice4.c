#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    int i;
    printf("Inscrivez un entier s'il vous plaît.\n");
    printf("Entier : ");
    scanf("%d", &i);
    if(i%2 == 0)
    {
        printf("%d est un nombre pair.", i);
    }

    else{printf("%d est pas un nombre impair. En effet le nombre %d n'est pas divisible par 2", i, i);}

}