#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    int k, n;
    float max=0, min=0, terme;
    printf("Quel est le nombre de termes de la suite en question ?\n");
    printf("Le nombre de termes est : ");
    scanf("%d", &n);

    for(k=1; k<n+1; k++)
    {
    printf("\nEntrer un terme de la suite s'il vous plaît\nterme%d = ", k);
    scanf("%f", &terme);
    
    if(terme>max){max = terme;}
    if(terme<min){min = terme;}
    }

    printf("\nLe nombre maximal de la suite est : %f\nLe nombre minimal de la suite est : %f",max, min);

}