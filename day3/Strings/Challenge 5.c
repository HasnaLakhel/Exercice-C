#include <stdio.h>
#include <string.h>

int main()
{
    char C[100];
    int i;
    puts("entre le message" );
    fgets(C,sizeof(C),stdin);
    for ( i = strlen(C); i >= 0; i--)
    {
        printf("%c",C[i]);
    }
    
    return 0;
}