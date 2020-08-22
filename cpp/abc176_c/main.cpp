#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int A;
    cin >> A;
    int current_max = A;
    unsigned long long count = 0;
    for(int i = 1; i < N; i++) {
        cin >> A;
        if(A <= current_max) {
            count += (current_max - A);
        } else {
            current_max = A;
        }
    }
    cout << count << endl;
    return 0;
}
