#include <stdio.h>
#include <string.h>


int main()
{
    char C[20];
    printf("entre le message");
    fgets(C,sizeof(C), stdin);
    printf("le message est %s",C);

    return 0;
}