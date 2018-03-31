#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int t;
    int x;
    int y;
    int old_t;
    int old_x;
    int old_y;
    int i;
    int diff;
    int diff_t;

    scanf("%d", &N);

    t = 0;
    x = 0;
    y = 0;
    for(i = 0; i < N; i++) {
        old_t = t;
        old_x = x;
        old_y = y;
        scanf("%d %d %d", &t, &x, &y);

        diff = abs(x - old_x) + abs(y - old_y);
        diff_t = t - old_t;

        if(diff <= diff_t && (diff%2) == (diff_t%2)) {
            ;
        } else {
            break;
        }
    }

    if(i >= N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
