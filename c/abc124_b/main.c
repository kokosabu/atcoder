#include <stdio.h>

int main()
{
    int N;
    int H;
    int count;
    int i;
    int max;

    scanf("%d", &N);

    max = 0;
    count = 0;
    for(i = 0; i < N; i++) {
        scanf("%d", &H);
        if(H >= max) {
            count += 1;
        }
        if(max < H) {
            max = H;
        }
    }

    printf("%d\n", count);

    return 0;
}
