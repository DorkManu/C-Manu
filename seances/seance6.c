#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modif(int *a,int *b)
{
  int tmp=*a;
  *a=*b;
  *b=tmp;
}
int *retourner_tab(int *tab)
{
  for(int i=0;i<4;i++)
    tab[i]=tab[i]*3;
  return tab;
}

int main()
{
  //  int i=5;
  //  int *p;
  //   p=&i;
  // // printf("%d\n",i);
  // // printf("%d\n",*p);
  // // i=9;
  // // printf("%d\n",i);
  // // printf("%d\n",*p);
  //  *p=66;
  // // printf("%d\n",i);
  // // printf("%d\n",*p);
  // printf("%p\n",&i);
  // printf("%p\n",&(*p));
  // printf("%p\n",&p);

//   
  int tab[45];
  int *p;
  p=tab;
  tab[0]=100;
  tab[1]=766;
  p[2]=44;
  *(p+3)=12;
  printf("%d\n",p[3]);
  printf("%p\n",tab);
  printf("%p\n",&tab[0]);
  printf("%p\n",&tab[1]);
  printf("%p\n",&tab[2]);
  printf("%d\n",tab[0]);
  printf("%d\n",p[0]);
  printf("%d\n",p[1]);
  

  //int tab[]={1,3,4,6};
  // int *p;
  // p=retourner_tab(tab);
  // for(int i=0;i<4;i++)
  //   printf("%d ",p[i]);

  // int *tableur;
  

  return 0;
}