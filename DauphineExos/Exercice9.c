#include <stdio.h>
#include <stdlib.h>

int recursion_product(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }

    else if (b%2 != 0)
    {
        return recursion_product(a, b-1)+a;
    }

    else
    {
        return recursion_product(2*a, b/2);
    }
    
}

void main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("Le produit %dx%d vaut %d", a, b, recursion_product(a, b));
}