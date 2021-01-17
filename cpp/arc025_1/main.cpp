#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> D(7);
    for(int i = 0; i < 7; i++) {
        cin >> D[i];
    }
    int sum = 0;
    for(int i = 0; i < 7; i++) {
        int J;
        cin >> J;
        if(D[i] > J) {
            sum += D[i];
        } else {
            sum += J;
        }
    }
    cout << sum << endl;
    return 0;
}
