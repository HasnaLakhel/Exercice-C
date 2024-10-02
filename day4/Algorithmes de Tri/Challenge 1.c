#include <stdio.h>

int main()
{
    int t[100], i, n, tmp;
    printf("entre le nombre de element\n");
    scanf("%d", &n);
    printf("entre le element de tableau \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    printf("le element de tableau avant le tri. \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", t[i]);
    }

    printf(" \nle element de tableau après le tri.  \n");
    for (i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (t[j] > t[j + 1])
            {
               tmp = t[j] ;
                t[j] = t[j + 1];
                  t[j + 1]=tmp  ;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", t[i]);
    }

    return 0;
}