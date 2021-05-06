#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string N;
    cin >> N;

    int max = 0;
    for(int i = 0; i < N.size(); i++) {
        max += N[i] - '0';
    }

    if(max%3 == 0) {
        cout << 0 << endl;
        return 0;
    }

    int min_count = 20;
    for(int i = 1; i < pow(2, N.size())-1; i++) {
        int count = 0;
        int sum = max;
        int digit = 1;
        int j = i;
        while(j) {
            if((j&1) == 1) {
                sum -= N[N.size()-digit] - '0';
                count += 1;
                // if(count >= min_count) {
                //     break;
                // }
            }
            j >>= 1;
            digit += 1;
        }

        if(count < min_count && sum%3 == 0) {
            min_count = count;
        }
    }

    if(min_count == 20) {
        cout << -1 << endl;
    } else {
        cout << min_count << endl;
    }
    return 0;
}
