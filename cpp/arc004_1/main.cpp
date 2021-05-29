#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<float> x(N);
    vector<float> y(N);

    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    float max_distance = 0.0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            float distance = sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2));
            if(distance > max_distance) {
                max_distance = distance;
            }
        }
    }

    cout << max_distance << endl;

    return 0;
}
