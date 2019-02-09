#include <stdio.h>

int main()
{
    int a;
    int b;
    int count[4];
    int count2[2];
    int i;

    for(i = 0; i < 4; i++) {
        count[i] = 0;
    }

    for(i = 0; i < 3; i++) {
        scanf("%d %d", &a, &b);
        count[a-1] += 1;
        count[b-1] += 1;
    }

    for(i = 0; i < 2; i++) {
        count2[i] = 0;
    }
    for(i = 0; i < 4; i++) {
        if(count[i] == 1) {
            count2[0] += 1;
        }
        if(count[i] == 2) {
            count2[1] += 1;
        }
    }

    if(count2[0] == 2 && count2[1] == 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
