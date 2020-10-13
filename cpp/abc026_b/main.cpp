#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> R(N);
    for(int i = 0; i < N; i++) {
        cin >> R[i];
    }

    sort(R.begin(), R.end(), std::greater<int>());

    unsigned int answer = 0;
    for(int i = 0; i < N; i++) {
        if((i%2) == 0) {
            answer += R[i] * R[i];
        } else {
            answer -= R[i] * R[i];
        }
    }

    cout << fixed << setprecision(15) << static_cast<double>(answer) * M_PI << endl;

    return 0;
}
