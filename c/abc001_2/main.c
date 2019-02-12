#include <stdio.h>

int main()
{
    int m;
    int vv;

    scanf("%d", &m);

    if(m < 100) {
        vv = 0;
    } else if(m <= 5000) {
        vv = m / 100;
    } else if(m <= 30000) {
        vv = (m / 1000) + 50;
    } else if(m <= 70000) {
        vv = ((m / 1000) - 30) / 5 + 80;
    } else {
        vv = 89;
    }

    printf("%02d\n", vv);
    
    return 0;
}
