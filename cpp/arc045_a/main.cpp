#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string S;

    vector<string> out;
    while(1) {
        cin >> S;
        if(cin.eof()) {
            break;
        }
        
        if(S == "Left") {
            out.push_back("<");
        } else if(S == "Right") {
            out.push_back(">");
        } else if(S == "AtCoder") {
            out.push_back("A");
        }
    }

    for(int i = 0; i < out.size()-1; i++) {
        cout << out[i] << " ";
    }
    cout << out[out.size()-1] << endl;

    return 0;
}
