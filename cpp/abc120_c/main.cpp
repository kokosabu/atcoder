#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string S;
    cin >> S;

    stack<char> s;

    int count = 0;
    for(int i = 0; i < S.size(); i++) {
        if(s.empty() == 0 && s.top() != S[i]) {
            s.pop();
            count += 2;
        } else {
            s.push(S[i]);
        }
    }

    cout << count << endl;

    return 0;
}
