#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int current = 0;
    int count = 0;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if(a == (current+1)) {
            current += 1;
        } else {
            count += 1;
        }
    }

    if(current != 0) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
