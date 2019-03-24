#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

static char S[100000+1];
static int AC[100000];

int main()
{
    int N;
    int Q;
    int count;
    int l;
    int r;

    int i;
    int j;
    int ac_i;
    int l_i;
    int r_i;

    scanf("%d %d", &N, &Q);
    scanf("%s%*c", S);

    ac_i = 0;
    for(i = 0; i < N; i++) {
        if(S[i] == 'A' && S[i+1] == 'C') {
            AC[ac_i] = i+1;
            ac_i += 1;
        }
    }

    for(i = 0; i < Q; i++) {
        scanf("%d %d", &l, &r);

        for(j = 0; j < ac_i; j++) {
            if(AC[j] >= l) {
                //printf("j=%d, AC[j]=%d, l=%d\n", j, AC[j], l);
                break;
            }
        }

        count = 0;

        for( ; j < ac_i; j++) {
            //printf("count=%d, j=%d, AC[j]=%d, r=%d\n", count, j, AC[j], r);
            if(AC[j] >= r) {
                break;
            }
            count += 1;
        }

        printf("%d\n", count);
    }

    return 0;
}
