#include <stdio.h>

int main() {
    int n,i, s=0,p;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for ( i = 1; i <= 10; i++) {
        p=n*i;
        printf("%d*%d=%d\n",n,i,p);
        s=s+p;
   }
        printf("la somme est:%d\n",s);



    return 0;
}