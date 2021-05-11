#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    int max = 0;
    string name;
    for(int i = 0; i < N; i++) {
        string S;
        int P;
        cin >> S >> P;
        sum += P;
        if(P > max) {
            max = P;
            name = S;
        }
    }
    if(max > (sum/2)) {
        cout << name << endl;
    } else {
        cout << "atcoder" << endl;
    }
    return 0;
}
