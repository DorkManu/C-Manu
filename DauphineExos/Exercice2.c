#include <stdio.h>

int main(void)
{
    int nbre1=3, nbre2=2, passerelle;
    printf("Avant la permutation des rôles nous avons la configuration suivante :\n");
    printf("nbre1 = %d\nnbre2 = %d\n\n", nbre1, nbre2);

    printf("Après la permutation des rôles nous obtenons la configuration suivante :\n");

    passerelle = nbre1;
    nbre1 = nbre2;
    nbre2 = passerelle;
    printf("nbre1 = %d\nnbre2 = %d\n\n", nbre1, nbre2);

    return 0;
}