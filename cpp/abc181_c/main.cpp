#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x[N];
    int y[N];

    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < N-2; i++) {
        for(int j = i+1; j < N-1; j++) {
            for(int k = j+1; k < N; k++) {
                int x_diff, y_diff;
                int x_diff2, y_diff2;

                if(x[i] < x[j] && x[i] < x[k]) {
                    x_diff  = x[j] - x[i];
                    y_diff  = y[j] - y[i];
                    x_diff2 = x[k] - x[i];
                    y_diff2 = y[k] - y[i];
                } else if(x[j] < x[k]) {
                    x_diff  = x[i] - x[j];
                    y_diff  = y[i] - y[j];
                    x_diff2 = x[k] - x[j];
                    y_diff2 = y[k] - y[j];
                } else {
                    x_diff  = x[i] - x[k];
                    y_diff  = y[i] - y[k];
                    x_diff2 = x[j] - x[k];
                    y_diff2 = y[j] - y[k];
                }

                if(x_diff == 0 && x_diff2 == 0) {
                    // cout << "x:" << x_diff << ", " << x_diff2 << endl;
                    // cout << i << "," << j << "," << k << endl;
                    cout << "Yes" << endl;
                    return 0;
                } else if(y_diff == 0 && y_diff2 == 0) {
                    // cout << "y:" << y_diff << ", " << y_diff2 << endl;
                    // cout << i << "," << j << "," << k << endl;
                    cout << "Yes" << endl;
                    return 0;
                } else if(((float)x_diff2/x_diff) == ((float)y_diff2/y_diff)) {
                    // cout << "x:" << x_diff << ", " << x_diff2 << endl;
                    // cout << "y:" << y_diff << ", " << y_diff2 << endl;
                    // cout << "i:" << ((float)x_diff2/x_diff) << ", " << ((float)y_diff2/y_diff) << endl;
                    // cout << i << "," << j << "," << k << endl;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
