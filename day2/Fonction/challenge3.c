#include <stdio.h>

int Maximum(int A,int B){
    int max;
    if (A>B)
    {
        max=A;
    }else
    {
        max=B;
    }
    return max;
}
 
int main()
{
    int A,B;
    printf("entre les nombre ");
    scanf("%d %d",&A,&B);
    printf("la Maximum   %d ",Maximum( A, B));
   return 0;
}