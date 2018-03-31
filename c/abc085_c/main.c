#include <stdio.h>

int main()
{
    int N;
    int Y;
    int x;
    int y;
    int z;

    scanf("%d %d", &N, &Y);

    for(x = N; x >= 0; x--) {
        for(y = N-x; y >= 0; y--) {
            z = N - x - y;
            if( ((x*10000) + (y*5000) + (z*1000)) == Y ) {
                printf("%d %d %d\n", x, y, z);
                return 0;
            }
        }
    }

    printf("-1 -1 -1\n");
    return 0;
}
