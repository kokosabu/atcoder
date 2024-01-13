#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int maxSum = max(A + B, B + C);
    maxSum = max(maxSum, A + C);

    cout << maxSum << endl;

    return 0;
}
