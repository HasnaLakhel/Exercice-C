#include <stdio.h>

int Minimum(int A,int B){
    int min;
    if (A<B)
    {
        min=A;
    }else
    {
        min=B;
    }
    return min;
}
 
int main()
{
    int A,B;
    printf("entre les nombre ");
    scanf("%d %d",&A,&B);
    printf("la Minimum   %d ",Minimum( A, B));
   return 0;
}