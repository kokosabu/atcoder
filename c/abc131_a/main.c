#include <stdio.h>

int main()
{
    char S[4+1];
    int i;
    char old;
    int is_good;

    scanf("%s", S);

    is_good = 1;
    for(i = 0; i < 3; i++) {
        if(S[i] == S[i+1]) {
            is_good = 0;
        }
    }

    if(is_good) {
        printf("Good\n");
    } else {
        printf("Bad\n");
    }

    return 0;
}
