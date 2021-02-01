#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    int sum = 0;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double average = (double)sum / N;

    double min = 100+1;
    int min_index = -1;
    for(int i = 0; i < N; i++) {
        double diff = average - a[i];
        if(diff < 0) {
            diff *= -1;
        }
        if(diff < min) {
            min = diff;
            min_index = i;
        }
    }

    cout << min_index << endl;
    return 0;
}
