#include <stdio.h>

int main()
{
    int N;
    int H;
    int W;

    scanf("%d", &N);
    scanf("%d", &H);
    scanf("%d", &W);

    printf("%d\n", (N-H+1)*(N-W+1));

    return 0;
}
