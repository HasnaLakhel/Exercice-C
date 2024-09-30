#include <stdio.h>
 
int main()
{
    int n, compte=0 ;
    printf("entre le nombre ");
    scanf("%d",&n);
    while (n != 0)
    {
        n=n/10;
        compte=compte +1;
    }
    printf("le nombre de chiffres dans cet entier %d :",compte);
 
   return 0;
}