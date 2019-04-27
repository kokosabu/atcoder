#include <stdio.h>

int main()
{
    int N;
    int T;
    int min;
    int i;

    scanf("%d", &N);
    scanf("%d", &min);

    for(i = 1; i < N; i++) {
        scanf("%d", &T);
        if(T < min) {
            min = T;
        }
    }

    printf("%d\n", min);

    return 0;
}
