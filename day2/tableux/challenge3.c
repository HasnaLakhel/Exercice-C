#include <stdio.h>


int main()
{
    int t[100], i, n,s=0;
    printf("entre  le nombre d'éléments ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",t[i]);
        s=s+t[i];
    }
            
    printf("le somme est: %d",s);
    

    
    return 0;
}