#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    int i,n;
    printf("Entrez le nombre dont nous devons déterminer les diviseurs plus grands que 1 s'il vous plaît ?\n");
    printf("nombre = ");
    scanf("%d", &n);
    int *tab=(int* )malloc(n*sizeof(int));

    for(i=2; i<=n; i++)
    {   
        if(n%i == 0)
        {
            *(tab+i-2) = i;
            printf("\n%d est un diviseur de %d", *(tab+i-2), n);
        }
    }
    printf("\n%ld", sizeof *tab);

    if( tab == NULL )
    {
        printf("Allocation impossible");
    }
    else
    {
        free(tab);
        tab = NULL;
    }
}