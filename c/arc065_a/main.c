/* NG */
#include <stdio.h>
#include <string.h>

int main()
{
    char S[10000 + 1];
    int i;

    //scanf("%s", S);
    fgets(S, 10000, stdin);

    //i = 0;
    i = strlen(S);
    //while(S[i] != '\0' && S[i] != '\n') {
    //while(S[i] != '\0') {
    //while(i < strlen(S)) {
    while(S[i] != '\0' && S[i] != '\n') {
        if(strncmp(&S[i], "remaerd", strlen("remaerd")) == 0) {
            i += strlen("remaerd");
        } else if(strncmp(&S[i], "emaerd", strlen("emaerd")) == 0) {
            i += strlen("emaerd");
        } else if(strncmp(&S[i], "resare", strlen("resare")) == 0) {
            i += strlen("resare");
        } else if(strncmp(&S[i], "esare", strlen("esare")) == 0) {
            i += strlen("esare");
        } else {
            printf("NO\n");
            return 0;
        }

#if 0
        if(strncmp(&S[i], "dreamer", strlen("dreamer")) == 0) {
            i += strlen("dreamer");
            if(strncmp(&S[i], "aser", strlen("aser")) == 0) {
                i += strlen("aser");
            } else if(strncmp(&S[i], "ase", strlen("ase")) == 0) {
                i += strlen("ase");
            }
        } else if(strncmp(&S[i], "dream", strlen("dream")) == 0) {
            i += strlen("dream");
        } else if(strncmp(&S[i], "eraser", strlen("eraser")) == 0) {
            i += strlen("eraser");
        } else if(strncmp(&S[i], "erase", strlen("erase")) == 0) {
            i += strlen("erase");
        } else {
            printf("NO\n");
            return 0;
        }
#endif
    }

    printf("YES\n");
    return 0;
}
