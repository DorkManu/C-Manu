#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// chaine_de_char(rand]
// tableau de chaine de caractère : char tab_ch[10 ou pas ] = {'e', 'r', 't','\0'};

int main()
{char verite[] = "Les meilleurs voeux n'ont aucun effet sur la vie des personnes à qui on les souhaite." ;
int i;
srand(time(0));
for (i=0; i<3; i++)
{

 int j= rand()%strlen(verite) ;

 verite[j] = '?';

}
printf("%s\n", verite);
// char tab_ch[10] = {'e', 's', 't','\0'};
// printf("%s",tab_ch);
  return 0;
}
