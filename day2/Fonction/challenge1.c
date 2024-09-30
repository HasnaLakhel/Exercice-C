#include <stdio.h>

int Somme(int A,int B){
    return A+B;
}
 
int main()
{
    int A,B;
    printf("entre les nombre ");
    scanf("%d %d",&A,&B);
    printf("la somme de %d est %d=%d",A,B,Somme( A, B));
   return 0;
}