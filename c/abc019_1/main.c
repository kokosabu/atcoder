#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int answer;

    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c) {
        if(b >= c) {
            answer = b;
        } else {
            answer = c;
        }
    } else if(b >= c) {
        if(a >= c) {
            answer = a;
        } else {
            answer = c;
        }
    } else {
        if(a >= b) {
            answer = a;
        } else {
            answer = b;
        }
    }

    printf("%d\n", answer);

    return 0;
}
