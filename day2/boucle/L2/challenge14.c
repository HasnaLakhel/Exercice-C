#include <stdio.h>

int main()
{
    int n, i, va;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    if (n < 0)
    {
        for (i = 0; i > n; i++)
        {
            va++;
        }
    }
    else
    {
        va=n;
    }
    printf("le valuer d|%d|=%d", n, va);
    return 0;
}