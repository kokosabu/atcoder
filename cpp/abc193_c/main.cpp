#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;
    unsigned long long sqrtN = sqrt(N);
    
    vector<bool> hit(sqrtN+1);
    unsigned long long count = 0;

    for(unsigned long long i = 2; i <= sqrtN; i++) {
        if(hit[i] == true) {
            continue;
        }

        // cout << i << endl;
        for(unsigned long long ab = i*i; ab <= N; ab*=i) {
            count += 1;
            if(ab <= sqrtN) {
                hit[ab] = true;
            }
        }
    }

    cout << N-count << endl;

    return 0;
}
