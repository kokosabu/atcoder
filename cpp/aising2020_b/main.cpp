#include <iostream>
using namespace std;

int main()
{
    int N;
    int a;
    int count;

    cin >> N;

    count = 0;
    for(int i = 1; i <= N; i++) {
        cin >> a;
        if((i%2) == 1 && (a%2) == 1) {
            count += 1;
        }
    }

    cout << count << endl;
    
    return 0;
}
