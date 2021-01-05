#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int answer = 1;
    while((answer*2) <= N) {
        answer *= 2;
    }

    cout << answer << endl;

    return 0;
}
