#include <stdio.h>
#include <stdbool.h>

#include <stdlib.h>
#include <time.h>
#include <string.h>

void exo1()
{
    srand(time(0));
    int entier = rand() % 101;
    float reel;
    double reel_long;
    entier = 600 + rand() % 101;
    reel = 2.3;
    reel_long = 4.6;
    printf("%d\n", entier);
    printf("%f\n", reel);
    printf("%lf\n", reel_long);
    printf("%s", "-----------avec les pointeurs--------------\n");
    int *ent;
    float *re;
    double *rl;

    ent = &entier;
    re = &reel;
    rl = &reel_long;

    *ent = 23;
    *re = 11.0;
    *rl = 2001.00;
    printf("%d\n", entier);
    printf("%f\n", reel);
    printf("%lf\n", reel_long);
}

void exo2()
{
    int a = 2;
    int b = 3;

    printf("a est égale à : %d\n", a);
    printf("b est égale à : %d\n", b);

    printf("%s", "-----------avec les pointeurs--------------\n");
    int *p1;
    int *p2;
    int c;

    p1 = &a, p2 = &b;
    c = *p2;
    *p2 = *p1;
    *p1 = c;

    printf("a est égale à : %d\n", a);
    printf("b est égale à : %d\n", b);
}

typedef struct personne /*exple de structure*/
{
    char name[90];
    char surname[90];
    int old;
    char address[90];
    char birthday[90];
    char nationality[90];
    char job[90];
    char hobby[90];
} person;

void exo4()
{
    int tab[20] = {0};
    tab[2] = 5;
    tab[4] = 22;
    tab[7] = 55;
    tab[19] = -3;
    tab[3] = 8;
    srand(time(0));
    int i, k;
    for (i = 0; i < 10; i++)
    {
        k = rand() % 20;
        if (k <= 10)
        {
            int *p;
            p = &tab[k];
            *p = 1;
        }
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d ", tab[i]);
    }
}

/*
void exo5()
{
    int tab[5] = {1, 45, 6, 9, 5};
    char *tabp;
    int a = 22;

    printf("%c\n", a);
    tabp = tab; //ou tout simplement tabp = tab //
    int i;
    for (i=0; i<20; i++)
    {
        printf("%d ", tabp[i]);
    }
}
*/


void init()
{
    int tab[10];
    int *tabp;
    tabp = tab;
    int i;
    for(i=0; i<10; i++)
    {
        tabp[i] = 2*i*i-i;
        printf("%d ", *(tabp+i));
    }
}
// strcpy(person1.name,"konan");
int main()
{
    init();
    return 0;
}