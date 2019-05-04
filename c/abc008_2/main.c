#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char S[50][50+1];
    int i;
    int j;
    int count;
    int max_i;
    int max_count;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }

    max_count = 0;
    for(i = 0; i < N; i++) {
        count = 1;
        for(j = i+1; j < N; j++) {
            if(strcmp(S[i], S[j]) == 0) {
                count += 1;
            }
        }
        if(count > max_count) {
            max_count = count;
            max_i = i;
        }
    }

    printf("%s\n", S[max_i]);

    return 0;
}
