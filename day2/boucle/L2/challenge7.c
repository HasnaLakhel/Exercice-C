#include <stdio.h>
int main()
{
    int n;
    printf("veuillez saisir la valeur de n:");
    scanf("%d", &n);
    if (n >= 0)
    {
        int u1 = 0, u2 = 1, un = 0, i;
        for (i = 0; i <= n; i++)
            printf("u%d\t=%d\n", i, un);
        un = u1 + u2;
        u2 = u1;
        u1 = un;
    }
    else if (n == 1 || n == 2)
        printf("u%d=1", n);
    else
    {
        printf("erreur");
    }
    return 0;
}