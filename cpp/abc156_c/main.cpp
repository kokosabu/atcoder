#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    vector<int> X(N);
    for(int i = 0; i < N; i++) {
        cin >> X[i];
        sum += X[i];
    }
    int P = round((double)sum / N);

    sum = 0;
    for(int i = 0; i < N; i++) {
        sum += (X[i] - P) * (X[i] - P);
    }

    cout << sum << endl;
    
    return 0;
}
