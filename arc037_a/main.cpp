#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        int m;
        cin >> m;
        if(m < 80) {
            sum += 80 - m;
        }
    }
    cout << sum << endl;
    return 0;
}
