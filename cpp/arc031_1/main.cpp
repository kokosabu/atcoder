#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name;

    cin >> Name;

    int i;
    for(i = 0; i < Name.size(); i++) {
        if(Name[i] != Name[Name.size()-i-1]) {
            break;
        }
    }
    if(i == Name.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
