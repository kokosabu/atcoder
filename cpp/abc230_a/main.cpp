#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 42) {
        N++;
    }
    printf("AGC%03d\n", N);
    return 0;
}