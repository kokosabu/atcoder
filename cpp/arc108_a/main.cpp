#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long S, P;
    cin >> S >> P;

    bool is_match = false;
    long limit = sqrt(P);
    for(long i = 1; i <= limit; i++) {
        if((P/i) == (S-i)) {
            is_match = true;
            break;
        }
    }

    if(is_match) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
