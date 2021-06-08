#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if(A > 10) {
            sum += A-10;
        }
    }

    cout << sum << endl;

    return 0;
}
