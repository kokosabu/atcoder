#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    int max = 0;
    for(int i = 0; i < N; i++) {
        int p;
        cin >> p;

        sum += p;
        if(p > max) {
            max = p;
        }
    }

    cout << (sum - max/2) << endl;

    return 0;
}
