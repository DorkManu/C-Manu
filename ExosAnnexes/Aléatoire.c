#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
srand(time(0));
int a = rand()%1000;
int b = rand()%a;
int c = rand()%1000;
float random =c*((float)(rand()%b)/a);
printf("random = %f\n", random);
printf("a = %d\n", a);
printf("b = %d\n", b);
printf("c = %d", c);
return 0;
}