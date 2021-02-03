#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int min_count = 30;  // 2^30 > 10^9
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;

        int count = 0;
        while((A%2) == 0 && count < min_count) {
            count += 1;
            A /= 2;
        }

        if(count < min_count) {
            min_count = count;
        }
    }

    cout << min_count << endl;

    return 0;
}
