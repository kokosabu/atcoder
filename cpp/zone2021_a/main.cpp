#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int count = 0;
    for(int i = 0; i < S.size()-3; i++) {
        if(S.substr(i, 4) == "ZONe") {
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}
