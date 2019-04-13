#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int K;
    int *list;
    char *name;
    char s;
    int i;
    char type;
    int index;
    int count;
    int zero_count;
    int max;
    int j;

    scanf("%d %d%*c", &N, &K);

    list = (int *)malloc(sizeof(int) * N);
    name = (char *)malloc(sizeof(char) * N);

    index = 0;
    s = getchar();
    type = s;
    count = 1;
    for(i = 1; i < N; i++) {
        s = getchar();
        if(s == type) {
            count += 1;
        } else {
            list[index] = count;
            name[index] = type;
            if(type == '1') {
                type = '0';
            } else {
                type = '1';
            }
            index += 1;
            count = 1;
        }
    }
    list[index] = count;
    name[index] = type;
    index += 1;

    max = 0;
    for(i = 0; i < index; i++) {
        zero_count = 0;
        count = 0;
        for(j = i; j < index; j++) {
            count += list[j];
            if(name[j] == '0') {
                zero_count += 1;
            }
            if(name[j] == '1' && zero_count == K) {
                break;
            }
        }
        if(max < count) {
            max = count;
        }
    }

    printf("%d\n", max);

    free((void *)list);
    free((void *)name);

    return 0;
}
