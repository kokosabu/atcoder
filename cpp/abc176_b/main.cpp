#include <iostream>
using namespace std;

int main()
{
    string N;
    int sum = 0;
    cin >> N;
    for(int i = 0; i < N.size(); i++) {
        sum += N[i] - '0';
    }
    if(sum%9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
