#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, D, H;
    cin >> N >> D >> H;

    float max = 0.0f;
    for(int i = 0; i < N; i++) {
        int d, h;
        cin >> d >> h;
        float t = H - (D * (float)(H-h)/(D-d));
        if(t > max) {
            max = t;
        }
    }
    cout << max << endl;

    return 0;
}
