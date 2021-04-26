#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int answer = 0;
    int base = 0;
    int count = 0;
    string prev_string = "";
    string T = S;
    for(int i = 0; i < S.size(); i++) {
        count += 1;
        if(prev_string != S.substr(base, count)) {
            prev_string = S.substr(base, count);
            answer += 1;
            base += count;
            count = 0;
            // cout << prev_string << endl;
        }
    }

    cout << answer << endl;

    return 0;
}
