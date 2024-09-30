#include <stdio.h>
int main()
{
    int t[500] , n ,i,x,R;
    printf("entre le nombre de element");
    scanf("%d",&n);
    printf("entre les element de tab");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    printf("entre element de recherche");
    scanf("%d",&R);
    x==0;
    for ( i = 0; i < n; i++)
    {
        if(t[i] == R){
            x++;
        }   
    }
    if (x == 0){
            printf("trouve pas ");
        }else
        {
            printf("trouve %d",R);

        }
    

    return 0;
}
