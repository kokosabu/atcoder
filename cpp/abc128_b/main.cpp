#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct restaurant {
    string S;
    int P;
    int i;

    bool operator<(const restaurant& right) const {
        if(S < right.S) {
            return true;
        } else if(S == right.S && P > right.P) {
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
    int N;
    cin >> N;
    vector<restaurant> restaurants(N);
    for(int i = 0; i < N; i++) {
        cin >> restaurants[i].S >> restaurants[i].P;
        restaurants[i].i = i+1;
    }
    sort(restaurants.begin(), restaurants.end());
    for(int i = 0; i < N; i++) {
        cout << restaurants[i].i << endl;
    }

    return 0;
}
