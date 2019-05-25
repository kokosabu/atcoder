#include <stdio.h>
#include <string.h>

int main()
{
    char X[50+2];
    int i;

    scanf("%s", X);

    for(i = 0; i < strlen(X); i++) {
        if(X[i] == 'c' && X[i+1] == 'h') {
            i += 1;
            continue;
        } else if(X[i] == 'o' || X[i] == 'k' || X[i] == 'u') {
            continue;
        } else {
            break;
        }
    }
    
    if(i == strlen(X)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
