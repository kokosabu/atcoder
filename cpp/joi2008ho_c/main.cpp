#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    set<int> P;
    set<int> Q;
    int p;
    P.insert(0);
    for(int i = 0; i < N; i++) {
        cin >> p;
        P.insert(p);
    }
    for(auto i = P.begin(); i != P.end(); i++) {
        for(auto j = P.begin(); j != P.end(); j++) {
            Q.insert(*i + *j);
        }
    }
    //sort(Q.begin(), Q.end());

    int max = 0;
    for(auto i = Q.begin(); i != Q.end() && *i < M; i++) {
        //cout << "i: " << *i << endl;
        auto j = Q.upper_bound(M-*i);
        j--;
        if(j !=  Q.end()) {
            //cout << "j: " << *j << endl;
            int point = *i + *j;
            //cout << "point: " << *i+*j << endl;
            if(point > max) {
                max = point;
                //cout << "max:" << max << endl;
            }
        }
    }

    cout << max << endl;
    return 0;
}
