#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<unsigned int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int left = 0;
    int right = N - 1;
    while(left < right) {
        if(A[left] == A[right]) {
            A[left] = 0;
            A[right] = 0;
            left += 1;
            right -= 1;
        } else if(A[left] > A[right]) {
            A[left] -= A[right];
            A[right] = 0;
            right -= 1;
        } else {
            A[right] -= A[left];
            A[left] = 0;
            left += 1;
        }
    }

    if(A[left] != 0) {
        cout << A[left] << endl;
    } else {
        cout << A[right] << endl;
    }

    return 0;
}

#if 0
    unsigned long long total = 0;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }

    unsigned long long half = 0;
    for(int i = 0; i < N; i++) {
        half += A[i];
        if(half >= (total/2)) {
            break;
        }
    }

    if(total%2 == 0) {
        cout << half - (total/2) << endl;
    } else {
        cout << half - (total/2) + 1<< endl;
    }

    return 0;
}
#endif
