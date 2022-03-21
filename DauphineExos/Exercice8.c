#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Un petit détoure sur les pointeurs. Comment garder les modifications dans une fonctions ?*/

void change(int *nbre1, int *nbre2)
{   int passerelle;
    passerelle = *nbre1;
    *nbre1 = *nbre2;
    *nbre2 = passerelle;
}

void main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    if(a<b){change(&a, &b);}
    
    int q = a/b, r = a%b;
    printf("La division euclidienne de %d par %d donne %d pour quotient et %d pour reste.", a, b, q, r);

}
