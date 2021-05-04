#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for(int a = 1; a <= N-1; a++) {
        for(int b = 1; a*b <= N-1; b++) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
