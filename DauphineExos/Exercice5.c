#include <stdio.h>
#include <stdlib.h>

void main()
{
    float a, b, c;
    printf("Veillez entrer trois nombres que dont nous déterminerons le plus grand\n");
    printf("nombre1 : ");
    scanf("%f", &a);
    printf("\nnombre2 : ");
    scanf("%f", &b);
    printf("\nnombre3 : ");
    scanf("%f", &c);

    if(a>=b & a>=c)
    {
        printf("Le plus grand de ces trois nombres est : %f", a);
    }
    if(b>=a & b>=c)
    {
        printf("Le plus grand de ces trois nombres est : %f", b);
    }
    else{printf("Le plus grand de ces trois nombres est : %f", c);}
}