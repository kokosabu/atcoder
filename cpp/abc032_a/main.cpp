#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int i;
    for(i = n; ; i++) {
        if((i%a) == 0 && (i%b) == 0) {
            break;
        }
    }
    cout << i << endl;
    return 0;
}
