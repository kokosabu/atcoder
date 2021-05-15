#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct mountain {
    string name;
    int tall;
};

bool operator<(const mountain& left, const mountain& right) {
    return left.tall < right.tall;
}

int main()
{
    int N;
    cin >> N;

    vector<struct mountain> ST(N);
    for(int i = 0; i < N; i++) {
        cin >> ST[i].name >> ST[i].tall;
    }

    sort(ST.begin(), ST.end());

    cout << ST[ST.size()-2].name << endl;

    return 0;
}
