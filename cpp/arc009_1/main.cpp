#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unsigned long sum = 0;
    for(int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << (unsigned long)(sum*1.05) << endl;
    return 0;
}
