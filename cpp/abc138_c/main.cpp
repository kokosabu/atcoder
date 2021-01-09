#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<double> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double value = v[0];
    for(int i = 1; i < N; i++) {
        value += v[i];
        value /= 2;
    }
    cout << value << endl;
    return 0;
}
