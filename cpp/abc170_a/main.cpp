#include <iostream>
using namespace std;

int main()
{
    int x;
    int i;
    int ans;

    for(i = 1; i <= 5; i++) {
        cin >> x;
        if(x == 0) {
            ans = i;
        }
    }

    cout << ans << endl;
}
