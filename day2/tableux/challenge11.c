#include <stdio.h>
int main()
{
    int t[500],i,n,va,nv,x=0;
    printf("entre le nombre element");
    scanf("%d",&n);
    printf("entre le element de tableux");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]); 
    }
    printf("entre la valeur à remplacer ");
    scanf("%d",&va);
    printf("entre la nouvelle valeur  ");
    scanf("%d",&nv);
    x==0;
    for ( i = 0; i < n; i++)
    {
        if (t[i]== va)
        {
            t[i]=nv;
            x++;

        }
   }
    printf("le  remplace est %d",t[i]);

    
    return 0;
}
