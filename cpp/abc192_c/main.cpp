#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int g1(string x)
{
    sort(x.begin(), x.end(), greater<char>());
    return stoi(x);
}

int g2(string x)
{
    sort(x.begin(), x.end());
    return stoi(x);
}

int f(string x)
{
    return g1(x) - g2(x);
}

int main()
{
    string N;
    int K;
    cin >> N >> K;

    string a = N;
    for(int i = 0; i < K; i++) {
        string next_a = to_string(f(a));
        if(a == next_a) {
            break;
        }
        a = next_a;
    }

    cout << a << endl;

    return 0;
}
