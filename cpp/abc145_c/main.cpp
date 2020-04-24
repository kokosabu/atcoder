#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 
#include <math.h>
using namespace std;

int main()
{
    int N;
    int x[8];
    int y[8];
    int i;
    int c;
    double total_length;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    vector<int> order(N);
    for(i = 0; i < N; i++) {
        order[i] = i;
    }

    c = 0;
    total_length = 0;
    do {
        for(i = 0; i < N-1; i++) {
            total_length += sqrt(pow(x[order[i+1]]-x[order[i]], 2) + pow(y[order[i+1]]-y[order[i]], 2));
        }
        c++;
    } while (next_permutation(order.begin(), order.end()));

    //cout << total_length /  (double)c << endl;
    cout << fixed << std::setprecision(10) << total_length/c << endl;

    return 0;
}
