#include <stdio.h>

int main(){
    int i,n,min,t[100];
    printf("entre le nombre d'éléments ");
    scanf("%d",&n);
    printf("entre les éléments du tableau ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    min=t[i];

    for ( i = 0; i < n; i++)
    {
        if (min > t[i])
        {
            min = t[i];
        }
    }
    printf("le min est[%d]",min);
    return 0;
}
    
