#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    int number = 1;
    for(int i = 0; i < N; i++) {
        if(number < K) {
            number *= 2;
        } else {
            number += K;
        }
    }
    cout << number << endl;
    return 0;
}
