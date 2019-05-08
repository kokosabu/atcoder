#include <stdio.h>

int main()
{
    int n;
    int a;
    int i;
    int sum;
    int nums[9] = {0, 1, 0, 1, 2, 3, 0, 1, 0};

    sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += nums[a-1];
    }
    printf("%d\n", sum);

    return 0;
}
