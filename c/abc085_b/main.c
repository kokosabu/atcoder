#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main()
{
    int N;
    int d[100];
    int i;
    int size;
    int stack;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &d[i]);
    }

    qsort(d, N, sizeof(int), compare_int);

    size = d[0];
    stack = 1;
    for(i = 1; i < N; i++) {
        if(d[i] < size) {
            stack += 1;
        }
        size = d[i];
    }

    printf("%d\n", stack);

    return 0;
}
