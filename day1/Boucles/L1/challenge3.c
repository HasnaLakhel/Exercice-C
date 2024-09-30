#include <stdio.h>
 
int main()
{
    int n,i,S ;
    printf("entre le nombre ");
    scanf("%d",&n);
    S=0;
    for(i=1; i<= n; ++i){
        S=S+i;
    }
    printf("la somme de nombre %d est :%d",n,S);
     

 
   return 0;
}