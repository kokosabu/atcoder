#include <stdio.h>

int main()
{
    int c;
    int count;
    int pre_c;

    pre_c = -1;
    do {
        c = getchar();
        if(c == EOF || c == '\n') {
            break;
        }
        if(c != pre_c) {
            if(pre_c != -1) {
                printf("%d", count);
            }
            count = 1;
            putchar(c);
            pre_c = c;
        } else {
            count += 1;
        }
    } while(1);

    printf("%d\n", count);

    return 0;
}

