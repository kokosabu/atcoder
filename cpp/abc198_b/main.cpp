#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin >> N;

    string rev_N = N;
    reverse(rev_N.begin(), rev_N.end());

    if(N == rev_N) {
        cout << "Yes" << endl;
        return 0;
    }

    int count_zero = 0;
    for(int i = 0; i < N.size(); i++) {
        if(rev_N[i] == '0') {
            count_zero += 1;
        } else {
            break;
        }
    }

    for(int i = 1; i <= count_zero; i++) {
        N = "0" + N;

        rev_N = N;
        reverse(rev_N.begin(), rev_N.end());

        if(N == rev_N) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
