#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void modif(int *a,int *b)
{
  
  int tmp;
  tmp=*a;
  *a=*b;
  *b=tmp;

}

long puiss(int x,int n)
{
  int i;
  long prod=x;
  for(i=1;i<n;i++)
  {
    prod=prod*x;
  }
  return prod;
}

int main()
{

  // int a=8;
  // int b=34;
  // printf("avant modif %d %d \n",a,b);
  // modif(&a,&b);
  // printf("apres modif %d %d \n",a,b);
  //int m;
  //scanf("%d",&m);
  //printf("valuer de m:%d\n",m);
  //  int i=7;
  //  printf("%p\n",&i);
  //  printf("taille i:%lu\n",sizeof(i));
  //  long j=puiss(2,32);
   
  //  printf("valeur de j:%lu\n",j);
  //  double l;
  //  printf("taille l:%lu\n",sizeof(l));
  //  printf("%p\n",&j);
  //  printf("taille j:%lu\n",sizeof(j));
  //  char c='a';
  //  printf("%p\n",&c);
  //  printf("taille c :%lu\n",sizeof(c));


  int i=7;
  int *t;
  t=&i;
  printf("valeur i:%d\n",i);
  printf("valeur *t:%d\n",*t);
  *t=67;
  printf("apres modif\n:");
  printf("valeur i:%d\n",i);
  printf("valeur *t:%d\n",*t);


  return 0;
}