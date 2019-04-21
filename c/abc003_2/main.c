#include <stdio.h>

int main()
{
    char S[10+1];
    char T[10+1];
    int i;

    scanf("%s", S);
    scanf("%s", T);

    for(i = 0; S[i] != '\0'; i++) {
        if(S[i] == T[i]) {
            ;
        } else if(S[i] == '@' && (T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r')) {
            ;
        } else if(T[i] == '@' && (S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r')) {
            ;
        } else {
            break;
        }
    }

    if(S[i] == '\0') {
        printf("You can win\n");
    } else {
        printf("You will lose\n");
    }

    return 0;
}

