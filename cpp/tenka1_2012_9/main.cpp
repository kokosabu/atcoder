#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> d(n);
    for(int i = 0; i < n; i++) {
        d[i] = 1;
    }

    d[0] = 0;
    d[1] = 0;
    for(int i = 2; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(d[j] != 0) {
                if(i % j == 0) {
                    d[i] = 0;
                }
            }
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        count += d[i];
    }

    cout << count << endl;

    return 0;
}
