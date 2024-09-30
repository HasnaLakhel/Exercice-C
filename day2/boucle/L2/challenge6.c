#include <stdio.h>

int main()
{
    int i ,n;
    printf("entre le nombre");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           printf("les nombre premier %d\n",i);
        }
        
    }
    return 0;
}
