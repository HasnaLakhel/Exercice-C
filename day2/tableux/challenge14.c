#include <stdio.h>

int main()
{
    int i,n,t[500],S=0,M;
    printf("entre le nombre de element");
    scanf("%d",&n);
    printf("entre les element de tableux");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    for ( i = 0; i < n; i++)
    {
        S=S+t[i];
        M=S/n;
    }
    printf("la Moyenne de element est %d",M);


    return 0;
}
