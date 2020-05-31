#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

map< int64_t, int > prime_factor(int64_t n) {
    map< int64_t, int > ret;
    for(int64_t i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }
    if(n != 1) ret[n] = 1;
    return ret;
}

int main()
{
    int64_t N;
    cin >> N;
    int sum = 0;
    map<int64_t, int> m = prime_factor(N);
    for (const auto& [key, value] : m){
        //std::cout << key << " => " << value << "\n";
        int base = 1;
        int i;
        int count = 0;
        for(i = base; i <= value; i+=base) {
            base += 1;
            count += 1;
        }
        sum += count;
    }
    cout << sum << endl;
    return 0;
}
