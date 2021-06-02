#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> dict;
    for(int i = 1; i <= 1000; i++) {
        dict.push_back(to_string(i));
    }
    sort(dict.begin(), dict.end());

    for(int i = 0; i < dict.size(); i++) {
        cout << dict[i] << endl;
    }

    return 0;
}
