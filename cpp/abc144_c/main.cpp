#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;
    unsigned long long rootN = sqrt(N);

    unsigned long long min = N;
    for(unsigned long long a = 1; a <= rootN; a++) {
        if((N%a) == 0) {
            unsigned long long distance = a + (N/a) - 2;
            if(distance < min) {
                min = distance;
            }
        }
    }

    cout << min << endl;

    return 0;
}
