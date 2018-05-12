#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_string(const void *a, const void *b)
{
    return strcmp(*((char **)a), *((char **)b));
}

int main()
{
    char s[5000+1];
    char **table;
    int K;
    int num;
    int i;
    int j;
    int count;
    int count2;
    char *current;
    
    scanf("%s%*c", s);
    scanf("%d", &K);

    num = ((strlen(s) + 1) * strlen(s)) / 2;
    table = (char **)malloc(sizeof(char *) * num);
   
    count = 0;
    for(i = 0; i < strlen(s); i++) {
        count2 = 0;
        for(j = 1; j <= strlen(s)-i; j++) {
            table[count] = (char *)malloc(sizeof(char) * (j + 1));
            strncpy(table[count], &(s[i]), j);
            count += 1;
            count2 += 1;
            if(count2 >= K) {
                break;
            }
        }
    }

    //qsort(table, num, sizeof(char *), compare_string);
    qsort(table, count, sizeof(char *), compare_string);

    j = 1;
    current = table[0];
    for(i = 1; i < num; i++) {
        if(j == K) {
            break;
        }
        if(strcmp(current, table[i]) != 0) {
            current = table[i];
            j += 1;
        }
    }

    printf("%s\n", current);

    return 0;
}
