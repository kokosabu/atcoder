#include <iostream>
using namespace std;

int main()
{
    unsigned long long N, A, B;
    cin >> N >> A >> B;

    if(A%2 == B%2) {
        cout << (B-A)/2 << endl;
    } else {
        cout << min(A-1, N-B)+1+(B-A-1)/2 << endl;
    }
    return 0;
}
