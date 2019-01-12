#include <stdio.h>

static int count;
int H;
int W;
char S[400][400+1];
char flg[400][400];

void trace(int cur_h, int cur_w)
{
    if(cur_h >= H) return;
    if(cur_w >= W) return;

    // h+1
    if((cur_h + 1) < H) {
        if(S[cur_h][cur_w] != S[cur_h+1][cur_w]) {
            if(flg[cur_h+1][cur_w] == 0) {
                flg[cur_h+1][cur_w] = 1;
                trace(cur_h+1, cur_w);
            }
        }
    }

    // w+1
    if((cur_w + 1) < W) {
        if(S[cur_h][cur_w] != S[cur_h][cur_w+1]) {
            if(flg[cur_h][cur_w+1] == 0) {
                flg[cur_h][cur_w+1] = 1;
                trace(cur_h, cur_w+1);
            }
        }
    }
}

void init_flg(char color, int cur_i, int cur_j)
{
    int i;
    int j;
    for(i = cur_i; i < H; i++) {
        for(j = cur_j; j < W; j++) {
            if(flg[i][j] != 0) {
                if(S[i][j] != color) {
                    count += 1;
                }
                flg[i][j] = 0;
            }
        }
    }
}

int main()
{
    int i;
    int j;

    scanf("%d %d%*c", &H, &W);
    for(i = 0; i < H; i++) {
        scanf("%s", S[i]);
        for(j = 0; j < W; j++) {
            flg[i][j] = 0;
        }
    }

    count = 0;
    for(i = 0; i < H; i++) {
        for(j = 0; j < W; j++) {
            trace(i, j);
            init_flg(S[i][j], i, j);
        }
    }

    printf("%d\n", count);

    return 0;
}
