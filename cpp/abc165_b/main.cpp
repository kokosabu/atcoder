#include <iostream>
using namespace std;

int main()
{
    long long X;
    cin >> X;
    int count;
    count = 0;
    for(long long i = 100; i < X; i *= 1.01) {
        //cout << i << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}
