#include <stdio.h>

int Multiplication(int A,int B){
    return A*B;
}
 
int main()
{
    int A,B;
    printf("entre les nombre ");
    scanf("%d %d",&A,&B);
    printf("la Multiplication de %d est %d=%d",A,B,Multiplication( A, B));
   return 0;
}