#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> merge;

    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        merge.push_back(A);
    }

    for(int i = 0; i < M; i++) {
        int B;
        cin >> B;

        auto itr = find(merge.begin(), merge.end(), B);
        if(itr == merge.end()) {
            merge.push_back(B);
        } else {
            // itr = remove(merge.begin(), merge.end(), B);
            // merge.erase(merge.end()-itr);
            merge.erase(remove(merge.begin(), merge.end(), B), merge.end());
        }
    }

    sort(merge.begin(), merge.end());

    for(int i = 0; i < merge.size(); i++) {
        cout << merge[i];
        if(i != merge.size()-1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
