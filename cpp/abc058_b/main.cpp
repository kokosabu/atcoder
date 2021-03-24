#include <iostream>
using namespace std;

int main()
{
    string O;
    cin >> O;
    string E;
    cin >> E;

    for(int i = 0; i < E.size(); i++) {
        cout << O[i];
        cout << E[i];
    }
    if(O.size() > E.size()) {
        cout << O[O.size()-1];
    }
    cout << endl;

    return 0;
}
