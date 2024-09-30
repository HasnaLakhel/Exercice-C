#include <stdio.h>
int main()
{
    int  base,exp, resultat=1;
    printf("entre le base");
    scanf("%d", &base);
    printf("entre l'exposant");
    scanf("%d", &exp);

    while (exp != 0)
    {
        resultat=resultat*base;
        exp--;
    }
    printf("%d",resultat);

    return 0;
}
