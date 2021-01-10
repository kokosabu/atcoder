#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int count = 0;
    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            float tilt = (float)(y[j]-y[i]) / (float)(x[j]-x[i]);
            if(-1 <= tilt && tilt <= 1) {
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
