#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        while((a%2) == 0) {
            count += 1;
            a /= 2;
        }
    }
    cout << count << endl;
    return 0;
}
