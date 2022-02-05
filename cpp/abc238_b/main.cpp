#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> cut(360, -1);

    int N;
    cin >> N;
    int index = 0;
    cut[index] = 0;
    for(int i = 1; i <= N; i++) {
        int A;
        cin >> A;
        index = (index + A) % 360;

        cut[index] = i;
    }

    int max = 0;
    int count = 0;
    int pre = 0;
    for(int i = 1; i < 360; i++) {
        if(cut[i] != -1) {
            count = i - pre;
            if(max < count) {
                max = count;
            }
            pre = i;
        }
    }
    count = 360 - pre;
    if(max < count) {
        max = count;
    }

    cout << max << endl;

    return 0;
}
