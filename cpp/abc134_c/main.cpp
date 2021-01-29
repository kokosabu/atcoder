#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    int max1 = 0;
    int max2 = 0;
    int max1_index = -1;
    int max2_index = -1;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        if(max1 <= A[i]) {
            max2 = max1;
            max2_index = max1_index;
            max1 = A[i];
            max1_index = i;
        } else if(max2 <= A[i]) {
            max2 = A[i];
            max2_index = i;
        }
    }

    for(int i = 0; i < N; i++) {
        if(i == max1_index) {
            cout << max2 << endl;
        } else {
            cout << max1 << endl;
        }
    }

    return 0;
}
