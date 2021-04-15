#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string correct = "indeednow";
    sort(correct.begin(), correct.end());

    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;

        sort(S.begin(), S.end());
        if(S == correct) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
