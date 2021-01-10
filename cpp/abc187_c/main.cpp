#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> mark;
    vector<string> not_mark;
    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;

        if(S[0] == '!') {
            mark.push_back(S.substr(1));
        } else {
            not_mark.push_back(S);
        }
    }

    sort(not_mark.begin(), not_mark.end());

    bool is_satisfiable = true;
    string dissatisfaction;
    for(int i = 0; i < mark.size(); i++) {
        if(binary_search(not_mark.begin(), not_mark.end(), mark[i])) {
            is_satisfiable = false;
            dissatisfaction = mark[i];
            break;
        }
    }

    if(is_satisfiable) {
        cout << "satisfiable" << endl;
    } else {
        cout << dissatisfaction << endl;
    }

    return 0;
}
