#include <stdio.h>
#include <ctype.h>

int main()
{
    char S[12+1];
    int i;

    scanf("%s", S);

    printf("%c", toupper(S[0]));

    for(i = 1; S[i] != '\0'; i++) {
        printf("%c", tolower(S[i]));
    }
    printf("\n");

    return 0;
}
