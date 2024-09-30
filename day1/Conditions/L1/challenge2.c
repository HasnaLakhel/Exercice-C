
#include <stdio.h>

int main()
{
    char  C;
    printf("entre le caracter:");
    scanf("%s",&C);
    switch(C){
      case 'a':case 'e':case 'i':case 'o':case 'u':case 'y':
      printf(" caractère est une voyelle");
    break;
  default:
        printf(" caractère est n'est pas une voyelle");

}
    return 0;
}