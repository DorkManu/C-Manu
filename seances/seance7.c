#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int product() 
{
    int a;
    int b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    return a*b ;
}


int main()
{
    char choix;
    choix = getchar();
    if ("a"<="h")
        printf("%c", choix);
    return 0;
}