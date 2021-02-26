#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    for(int i = 1; i <= N; i++) {
        int some = (i%10) + ((i/10)%10) + ((i/100)%10) + ((i/1000)%10) + ((i/10000)%10);
        if(some >= A && some <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
