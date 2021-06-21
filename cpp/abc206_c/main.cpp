#include <iostream>
// #include <vector>
#include <map>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    map<unsigned int, unsigned long long> m;

    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        m[A] += 1;
    }

    unsigned long long count = (N * (N-1)) / 2;

    for(map<unsigned int, unsigned long long>::iterator i = m.begin(); i != m.end(); i++) {
        if(i->second > 1) {
            count -= (i->second * (i->second-1)) / 2;
        }
    }

    cout << count << endl;

    return 0;
}
