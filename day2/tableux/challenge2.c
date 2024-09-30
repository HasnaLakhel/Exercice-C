#include <stdio.h>

int main()
{
    int t[100], i, n;

    printf("entre le nombre d'éléments ");
    scanf("%d", & n);
    printf("entre l'éléments \n");
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&t[i]);
    }
   for ( i = 0; i < n; i++)
    {
      printf("T[%d]=%d\n",i,t[i]);
    }
    
    
    return 0;
}