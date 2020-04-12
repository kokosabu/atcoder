#include <iostream>
using namespace std;

int memo[201][201];

int gcd(int x, int y)
{
    if(memo[x][y] == -1) {
        memo[x][y] = (x % y) ? gcd(y, x % y) : y;
    }
    return memo[x][y];
}

int gcd3(int a, int b, int c)
{
    int g = gcd(a, b);
    return gcd(g, c);
}

int main()
{
    int K;
    cin >> K;
    int a, b, c;

    for(int i = 1; i <= K; i++) {
        for(int j = 1; j <= K; j++) {
            memo[i][j] = -1;
        }
    }

    int sum = 0;
    for(a = 1; a <= K; a++) {
        for(b = 1; b <= K; b++) {
            for(c = 1; c <= K; c++) {
                sum += gcd3(a, b, c);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
