#include <stdio.h>

int main()
{
    int i, n, t[100];
    printf("entre le nombre de element");
    scanf("%d", &n);
    printf("entre le éléments du tableau");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    printf("les element pairs est :");
    for (i = 0; i < n; i++)
    {
        if (t[i] % 2 ==0)
        {
            printf("[%d]",t[i]);
        }
    }

    return 0;
}
