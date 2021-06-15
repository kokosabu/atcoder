#include <iostream>
using namespace std;

int main()
{
    int L;
    cin >> L;

    unsigned long long count = 1;

    for(int i = 1; i <= 11; i++) {
        count *= (L-i);
        count /= i;
    }

    cout << count << endl;

    return 0;
}
