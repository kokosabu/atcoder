#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long count = 0;

    for(long long i = 1; i <= 5; i++) {
        long long tmp = N - (pow(10, 3*i)-1);
        // cout << i << ":" << tmp << endl;
        if(tmp > pow(10,3*(i+1))-pow(10,3*i)) {
            tmp = pow(10,3*(i+1))-pow(10,3*i);
        }
        if(tmp > 0) {
            count += tmp * i;
        }
    }

    cout << count << endl;

    return 0;
}
