#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xa;
    int ya;
    int xb;
    int yb;
    int xc;
    int yc;
    int a;
    int b;
    int c;
    int d;
    double answer;

    scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);

    a = xb - xa;
    b = yb - ya;
    c = xc - xa;
    d = yc - ya;

    answer = (double)abs(a*d - b*c) / 2;

    printf("%.1f\n", answer);

    return 0;
}

