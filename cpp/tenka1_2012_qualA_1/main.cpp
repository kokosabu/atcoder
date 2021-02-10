#include <iostream>
using namespace std;

int calc(int n)
{
    static int ans[45+1] = {};
    if(ans[n] != 0) {
        return ans[n];
    }

    if(n == 0) {
        ans[n] = 1;
        return 1;
    } else if(n == 1) {
        ans[n] = 1;
        return 1;
    } else {
        ans[n] = calc(n-2) + calc(n-1);
        return ans[n];
    }
}

int main()
{
    int n;
    cin >> n;
    cout << calc(n) << endl;
    return 0;
}
