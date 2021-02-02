#include <iostream>
#include <set>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    set<unsigned long long> s;

    for(unsigned long long i = 1; (i*i) <= N; i++) {
        if((N%i) == 0) {
            s.insert(i);
            s.insert(N/i);
        }
    }

    for(auto x:s) {
        cout << x << endl;
    }

    return 0;
}
