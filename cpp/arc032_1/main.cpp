#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    if(sum == 1) {
        cout << "BOWWOW" << endl;
    } else {
        int i;
        for(i = 2; i < sum; i++) {
            if((sum%i) == 0) {
                break;
            }
        }
        if(i == sum) {
            cout << "WANWAN" << endl;
        } else {
            cout << "BOWWOW" << endl;
        }
    }
    return 0;
}
