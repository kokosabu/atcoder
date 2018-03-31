#include <stdio.h>

int main()
{
    int c;
    int count;
    int i;

    count = 0;
    for(i = 0; i < 3; i++) {
        c = getchar();
        if(c == '1') {
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
