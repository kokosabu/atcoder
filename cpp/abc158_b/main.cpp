#include <iostream>
using namespace std;

int main()
{
    unsigned long long N, A, B;
    cin >> N >> A >> B;
    unsigned long long count = N / (A+B) * A;
    if(N%(A+B) >= A) {
        count += A;
    } else {
        count += N % (A+B);
    }
    cout << count << endl;
    return 0;
}
