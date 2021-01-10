#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long long total = 0;
    vector<long long> town(N);
    for(int i = 0; i < N; i++) {
        long long A, B;
        cin >> A >> B;
        total -= A;
        town.push_back(2*A+B);
    }

    sort(town.begin(), town.end(), greater<long long>());

    int count;
    for(count = 0; count < N; count++) {
        if(total > 0) {
            break;
        }
        total += town[count];
    }

    cout << count << endl;

    return 0;
}
