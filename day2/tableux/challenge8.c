#include <stdio.h>
int main()
{
    int i,n,t[500],tcopy[500];
    printf("entre le nombre de element\n");
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++)
    {
        printf("entre les element\n");
        scanf("%d",&t[i]);
        t[i]=tcopy[i];
    }
    for ( i = 0; i < n; i++)
    {
        printf("le tableux original \n[%d]",t[i]);
    }

    for ( i = 0; i < n; i++){
        printf("le tableux Copie \n [%d]",tcopy[i]);
    }
    return 0;
}
