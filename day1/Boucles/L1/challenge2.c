#include <stdio.h>
 
int main()
{
    int n,i,F ;
    printf("entre le nombre ");
    scanf("%d",&n);
    F=1;
    for(i=1; i<= n; ++i){
        F=F*i;
    }
     printf("%d != %d\n",n,F);

 
   return 0;
}