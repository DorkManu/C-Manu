#include <stdio.h>

// afficher un entier %d
  // ---------un reel %f
  // ----------chaine de caractere %s
  //demander à l'utilisateur l'insertion d'un entier scanf("%d",&entier)
  // --------------------------------unre chaine de caractère scanf("%s", chaine)
  // boucle for et while
  // and -->&; or-->||
int som(int tab[10])
{
  
  int i;
  int s=0;
  for(i=0;i<10;i++)
  {
    s=s+tab[i];
  }
  return s;
}

int main()
{

  int tab[20];
  int i;
  for(i=0;i<8;i++)
  {
     tab[i]=i;
  }
  for(i=0;i<20;i++)
  {
    printf("%d  ",tab[i]);
  }
  
  return 0;
}