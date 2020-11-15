#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p1, p2;
    cin >> p1 >> p2;
    int count = 0;
    for(int i = 2; i < n; i++) {
        int p3;
        cin >> p3;
        if((p1 < p2 && p2 < p3) || (p1 > p2 && p2 > p3)) {
            count += 1;
        }
        p1 = p2;
        p2 = p3;
    }
    cout << count << endl;
    return 0;
}
