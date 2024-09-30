#include <stdio.h>

int main()
{
    int n , i ,f, t[100];
    printf("entre le nombre de l'element");
    scanf("%d",&n);
    printf("entre le éléments du tableau");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    printf("entre le nombre de le facteur ");
    scanf("%d",&f);
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",t[i]*f);
    }    
    return 0;
}
