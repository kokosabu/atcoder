#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    int b;
    int p;
    int max;
    int ans;

    scanf("%d", &X);

    max = 1;
    for(b = 2; b <= X; b++) {
        for(p = 2; ; p++) {
            ans = pow(b, p);
            if(ans > X) {
                break;
            }
            if(ans > max) {
                max = ans;
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
