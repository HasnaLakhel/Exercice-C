
#include <stdio.h>

int main()
{
    int  a,b;
    printf("entre les nombre:");
    scanf("%d %d",&a ,&b);
    if(a==b){
        printf("le somme est:%d+%d=%d",a,b,(a+b)*3);
    }else{
    printf("la somme est :%d+%d=%d",a,b,a+b);
    }
    return 0;
}