#include <iostream>
#include <vector>
using namespace std;

static int N;
static int K;
static int count;
static int all_cities;
vector<vector<int>> T;

void trace(unsigned int total, unsigned char cities, int current)
{
    if(cities == all_cities) {
        total += T[current][0];
        if(total == K) {
            count += 1;
        }
    } else {
        for(int i = 0; i < N; i++) {
            int flag = 1 << i;
            if((cities & flag) != 0) {
                continue;
            }

            trace(total+T[current][i], cities|flag, i);
        }
    }
}

int main()
{
    cin >> N >> K;

    all_cities = 0;
    for(int i = 0; i < N; i++) {
        vector<int> t(N);
        for(int j = 0; j < N; j++) {
            cin >> t[j];
        }
        T.push_back(t);
        all_cities |= 1 << i;
    }

    count = 0;
    trace(0, 1, 0);

    cout << count << endl;

    return 0;
}
