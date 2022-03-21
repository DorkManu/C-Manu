#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void renverse( int tab[], int n)
{ 
  int new_tab[n] ;
  int i ;

  for(i=0;i<n;i++)
  {
    new_tab[i] = tab[n-1-i];
  }

  for(i=i;i>=0;i--)
  {
    tab[i] = new_tab[i];
  }
}


void del_firt(int tab[])
{
  int i ;
  for(i = 0; i<4; i++)
  {
    tab[i] = tab[i+1];
  }
}


void insert(int tab[], int n,  int new_nbre)
{
  int i = 0 ;
  while(tab[i] < new_nbre)
  {
    i++ ;
  }
  int i0 = i ;

  for(i=i; i<n; i++)
  {
    tab[i+1] = tab[i];
  }
  tab[i0] = new_nbre;
}

int comp_char(char str[])
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++ ;
  }
  return i;
}

int main()
{
  char citation[1000]="Tout ce qui se conçoit bien s'énonce clairement et les mots pour le dire vienne aisément Nicolas Boileau";
  printf("%lu",strlen(citation)) ;
  return 0;
}