#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void comparaison_ch( char chaine1[], char chaine2[])
{
  int i;
  int sum_i=0;
  int j;
  int sum_j=0;
  for(i=0; i<strlen((chaine1)); i++)
  {
    sum_i += chaine1[i];
  }
  for(j=0; j<strlen((chaine2)); j++)
  {
    sum_j += chaine2[j];
  }

  if (sum_i < sum_j)
  {
    printf("%d %d\n", sum_i, sum_j);
    printf("%s vient avant %s dans l'ordre lexicographique", chaine1, chaine2);
  }
  else if (sum_i > sum_j)
  {
    printf("%d %d\n", sum_i, sum_j);
    printf("%s vient avant %s dans l'ordre lexicographique", chaine2, chaine1);
  }
  else 
  {
    printf("Les deux chaines sont identiques ");
  }
}

void concatenate(char ch1[], char ch2[])
{
 int i;
 for (i=0; i<strlen(ch2); i++ )
 {
   ch1[strlen(ch1)]=ch2[i];
 }
}

void cesar( char ch1[], char ch2[], int n)
{
  int i;
  for(i=0; i<strlen(ch1)-n; i++)
  {
    ch2[i+n] = ch1[i];
  }

  int j;
  for(j=0; j<n; j++)
  {
    ch2[j] = ch1[i];
    i++;
  }
}

int main()
{
  char nom1[10] = "Bonjour";
  char nom2[10] = "";
  cesar(nom1, nom2, 2);
  printf("%s", nom2);
  return 0;
}