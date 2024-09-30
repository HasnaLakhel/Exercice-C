#include <stdio.h>

int main() {
    int i,n,S=0;
    printf("entre le nombre\n");
    scanf("%d",&n);
    for (i=1 ; i <= n; i++){
        S = S + i;
    }
    printf("pour n = %d, la somme est %d",n,S);

    return 0;
}