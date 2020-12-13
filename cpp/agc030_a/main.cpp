#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int sum = 0;
    sum += B;
    sum += min(B, C);

    C = C - min(B, C);

    sum += min(A, C);
    C = C - min(A, C);

    if(C > 0) {
        sum += 1;
    }

    cout << sum << endl;

    return 0;
}
