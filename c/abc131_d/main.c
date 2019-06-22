#include <stdio.h>
#include <stdlib.h>

typedef struct task {
    unsigned int A;
    unsigned int B;
} task;

int comp(const void *_a, const void *_b)
{
    task *a;
    task *b;

    a = (task *)_a;
    b = (task *)_b;

    if(a->B < b->B) {
        return -1;
    } else if(a->B > b->B) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int N;
    task *T;
    int i;
    unsigned int t;
    int is_success;

    scanf("%d", &N);
    T = (task *)malloc(sizeof(task) * N);
    for(i = 0; i < N; i++) {
        scanf("%d %d", &(T[i].A), &(T[i].B));
    }

    qsort(T, N, sizeof(task), comp);

    is_success = 1;
    t = 0;
    for(i = 0; i < N; i++) {
        t += T[i].A;
        if(t > T[i].B) {
            is_success = 0;
            break;
        }
    }

    if(is_success) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    free((void *)T);

    return 0;
}
