#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a,int b)
{
  printf("%d",10);
  if (a<b)
  {
    return a;
  }
  
  return b;
}
int comp_Char(char s1[],char s2[])
{

  //int mini=min(strlen(s1),strlen(s2));
  int i=0;
  while((s1[i]!='\0') || (s2[i]!='\0'))
  {
    if(s1[i]!=s2[i])
    {
      return 0;
    }
    i++;
  }
  return 1;
}

void copy_char(char s1[],char s2[])
{
  int i=0;
  while(s2[i]!='\0')
  {
    s1[i]=s2[i];
    i++;
  }
  // s1[i]='\0';
  printf("%s\n",s1);
}


//strlen() -> retourne la longueur d'une chaine de caractère
//strcpy()-> copier une chaine de caractère
//strcat() -> concatenation de deux chaines de caractère
//strcmp()-comparaison de deux chaines de caractère
// chaine de caractère-> tableau de caractères + caractère de fin '\0';

int mafonction(int a, int b)
  {return a+b;}


int main()
{

  char s1[8];
  char s2[10]="dahsie";
  // int u=comp_Char(s1,s2);
  //  int k=min(4,6);
  //  printf("%d",k);
  copy_char(s1,s2);
  printf("%s",s1);
  
  

  // int i=0;
  // while(s1[i]!='\0')
  // {
  //   i++;
  // }
  // int j=0;
  // while(s2[j]!='\0')
  // {
  //   s1[i+j]=s2[j];
  //   j++;
  // }  

  // printf("%s\n",s1);

  
  return 0;
}
