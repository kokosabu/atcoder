#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int max_a = 0;
    int max;
    for(int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        if(A > max_a) {
            max_a = A;
            max = A + B;
        }
    }
    cout << max << endl;
    return 0;
}
