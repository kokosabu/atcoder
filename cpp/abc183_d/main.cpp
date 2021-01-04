#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct state {
    int start;
    int end;
    int total;
};

int main()
{
    unsigned int N, W;
    cin >> N >> W;

    vector<struct state> manage(1);
    manage[0].start = 0;
    manage[0].end = 2*100000+1;
    manage[0].total = 0;

    for(int i = 0; i < N; i++) {
        vector<struct state> next;

        unsigned int S, T, P;
        cin >> S >> T >> P;

        for(auto itr = manage.begin(); itr != manage.end(); ++itr) {
            struct state tmp;
            if(itr->end < S) {
                next.push_back(*itr);
            } else if(itr->start > T) {
                next.push_back(*itr);
            } else if(itr->start == S && itr->end == T) {
                tmp = *itr;
                tmp.total += P;
                next.push_back(tmp);
            } else if(itr->start < S && itr->end > T) {
                tmp.start = itr->start;
                tmp.end = S;
                tmp.total = itr->total;
                next.push_back(tmp);

                tmp.start = S;
                tmp.end = T;
                tmp.total = itr->total + P;
                next.push_back(tmp);

                tmp.start = T;
                tmp.end = itr->end;
                tmp.total = itr->total;
                next.push_back(tmp);
            } else if(S < itr->start && T < itr->end) {
                tmp.start = S;
                tmp.end = itr->start;
                tmp.total = itr->total;
                next.push_back(tmp);

                tmp.start = itr->start;
                tmp.end = itr->end;
                tmp.total = itr->total + P;
                next.push_back(tmp);

                tmp.start = itr->end;
                tmp.end = T;
                tmp.total = itr->total;
                next.push_back(tmp);
            } else if(itr->start <= S && S <= itr->end && itr->end <= T) {
                tmp.start = itr->start;
                tmp.end = S;
                tmp.total = itr->total;
                next.push_back(tmp);

                tmp.start = S;
                tmp.end = itr->end;
                tmp.total = itr->total + P;
                next.push_back(tmp);

                tmp.start = itr->end;
                tmp.end = T;
                tmp.total = itr->total;
                next.push_back(tmp);
            } else if(S <= itr->start && itr->start <= T && T <= itr->end) {
                tmp.start = S;
                tmp.end = itr->start;
                tmp.total = itr->total;
                next.push_back(tmp);

                tmp.start = itr->start;
                tmp.end = T;
                tmp.total = itr->total + P;
                next.push_back(tmp);

                tmp.start = T;
                tmp.end = itr->end;
                tmp.total = itr->total;
                next.push_back(tmp);
            }
        }

        manage = next;
    }

    unsigned int max = 0;
    for(auto itr = manage.begin(); itr != manage.end(); ++itr) {
        cout << itr->start << ", " << itr->end << ", " << itr->total << endl;
        if(max < itr->total) {
            max = itr->total;
        }
    }

    if(max <= W) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
