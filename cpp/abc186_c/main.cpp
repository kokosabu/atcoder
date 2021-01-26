#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    for(int i = 1; i <= N; i++) {
        int j;
        for(j = i; j > 0; j /= 10) {
            if((j%10) == 7) {
                count += 1;
                break;
            }
        }
        if(j != 0) {
            continue;
        }
        char k[16];
        snprintf(k, sizeof(k), "%o", i);
        j = 0;
        while(k[j] != '\0') {
            if(k[j] == '7') {
                count += 1;
                break;
            }
            j += 1;
        }
    }

    cout << N-count << endl;
    return 0;
}
