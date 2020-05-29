#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int pos = S.find("HAGIYA");
    cout << S.substr(0, pos) << "HAGIXILE" << S.substr(pos+6) << endl;
    return 0;
}
