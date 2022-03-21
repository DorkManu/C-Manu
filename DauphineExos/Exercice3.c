#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    char alphabet[36] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ12456789";
    int i;
    printf("Table de correspondance ASCII :\n");
    for(i=0; i<34; i++)
    {
    printf("caractère = %c    code = %d   code hexadecimal = %x\n", alphabet[i], alphabet[i], alphabet[i]);
    }
}