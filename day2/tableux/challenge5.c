#include <stdio.h>

int main(){
    int i,n,max,t[100];
    printf("entre le nombre de element: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    max=t[i];
    for ( i = 0; i < n; i++)
    {
        if (t[i] < max)
        {
            max=t[i];
        }
        
    }
    printf("le max est[%d]",max);
    return 0;
}
    

  