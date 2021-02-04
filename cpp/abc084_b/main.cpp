#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool is_postal_code = true;

    int index = 0;
    for(int i = 0; i < A; i++) {
        if(!(S[index] >= '0' && S[index] <= '9')) {
            is_postal_code = false;
        }
        index += 1;
    }

    if(S[index] != '-') {
        is_postal_code = false;
    }
    index += 1;

    for(int i = 0; i < B; i++) {
        if(!(S[index] >= '0' && S[index] <= '9')) {
            is_postal_code = false;
        }
        index += 1;
    }

    if(is_postal_code) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
