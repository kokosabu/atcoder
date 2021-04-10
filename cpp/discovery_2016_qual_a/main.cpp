#include <iostream>
using namespace std;

int main()
{
    int W;
    cin >> W;

    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";

    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if((i%W) == W-1) {
            cout << endl;
        }
    }
    if(s.size()%W != 0) {
        cout << endl;
    }

    return 0;
}
