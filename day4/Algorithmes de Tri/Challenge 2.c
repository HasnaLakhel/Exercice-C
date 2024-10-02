#include <stdio.h>

int main()
{
    int t[50], i, n, tmp, j;
    printf("entre le nombre de l'element\n");
    scanf("%d", &n);
    printf("entre l'element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    for ( i = 1; i < n; i++)
    {
        tmp=t[i];
        j=i-1;
        while (j>=0 && tmp<t[j])
        {
            t[j+1]=t[j];
            j--;
        }
        t[j+1]=tmp;
        
    }
    


    printf("Éléments triés:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", t[i]);
    }
    return 0;
}