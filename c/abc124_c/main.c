#include <stdio.h>

int main()
{
    int s;
    int black_head;
    int white_head;

    black_head = 0;
    white_head = 0;
    while(1) {
        //  - -
        // '0101' white_head
        // '1010' black_head
        s = getchar();
        if(s != '0' && s != '1') {
            break;
        }
        if(s == '0') {
            black_head += 1;
        } else {
            white_head += 1;
        }

        //   - -
        // '0101' white_head
        // '1010' black_head
        s = getchar();
        if(s != '0' && s != '1') {
            break;
        }
        if(s == '0') {
            white_head += 1;
        } else {
            black_head += 1;
        }
    }

    if(black_head <= white_head) {
        printf("%d\n", black_head);
    } else {
        printf("%d\n", white_head);
    }

    return 0;
}
