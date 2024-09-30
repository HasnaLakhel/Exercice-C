#include <stdio.h>

int main()
{
    int n,i,nInverse =0;
    printf("entre le nombre");
    scanf("%d",&n);
    while(n != 0){
        nInverse= nInverse * 10 + n%10;
        n=n/10;
        
    }
    printf("le nombre nInverse:%d",nInverse);
    return 0;
}