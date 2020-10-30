#include <iostream>
using namespace std;

int main()
{
    string N;
    cin >> N;

    int x = 0;
    int fx = 0;
    for(int i = 0; i < N.size(); i++) {
        x = x*10 + (N[i]-'0');
        fx += N[i] - '0';
    }

    if((x%fx) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
