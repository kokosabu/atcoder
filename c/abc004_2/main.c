#include <stdio.h>

int main()
{
    char c[4][4];
    int i;
    int j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%c%*c", &c[i][j]);
        }
    }

    for(i = 3; i >= 0; i--) {
        for(j = 3; j > 0; j--) {
            printf("%c ", c[i][j]);
        }
        printf("%c\n", c[i][j]);
    }

    return 0;
}

