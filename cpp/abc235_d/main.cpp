#include <cmath>
#include <iostream>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;

int main()
{
    long long a, N;
    cin >> a >> N;

    int t = 0;
    queue<long long> q;
    unordered_map<long long, int> map;
    q.push(1);

    while(!q.empty()) {
        t += 1;
        q.push(-1);
        while(q.front() != -1) {
            long long x = q.front();
            q.pop();

            if(x == N) {
                cout << t-1 << endl;
                return 0;
            }

            if(x < N) {
                long long n = x * a;
                if(map[n] == 0) {
                    map[n] = 1;
                    q.push(n);
                }
            }
            if(x >= 10 && (x%10) != 0) {
                long long a = x % 10;
                long long b = x / 10;
                long long d = 0;
                while(x != 0) {
                    x /= 10;
                    d += 1;
                }
                long long n = a*pow(10, d-1) + b;
                // s = s.substr(s.size()-1, 1) + s.substr(0, s.size()-1);
                // long long n = stoi(s);
                if(map[n] == 0) {
                    map[n] = 1;
                    q.push(n);
                }
            }
        }
        q.pop();
    }

    cout << -1 << endl;
    return 0;
}
