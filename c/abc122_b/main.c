#include <stdio.h>
#include <string.h>

int main()
{
    char S[10+1];
    int max;
    int count;
    int i;

    scanf("%s", S);

    max = 0;
    count = 0;
    for(i = 0; i < strlen(S); i++) {
        if(S[i] != 'A' && S[i] != 'C' && S[i] != 'G' && S[i] != 'T') {
            if(count > max) {
                max = count;
            }
            count = 0;
        } else {
            count += 1;
        }
    }
    if(count > max) {
        max = count;
    }

    printf("%d\n", max);

    return 0;
}
