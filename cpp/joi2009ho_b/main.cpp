#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int d;
    int n;
    int m;
    cin >> d;
    cin >> n;
    cin >> m;

    vector<int> S;
    S.push_back(0);
    S.push_back(d);
    for(int i = 0; i < n-1; i++) {
        int s;
        cin >> s;
        S.push_back(s);
    }

    sort(S.begin(), S.end());

    /*
    for(auto i = S.begin(); i != S.end(); i++) {
        cout << *i << ", ";
    }
    cout << endl;
    */

    int sum = 0;

    for(int i = 0; i < m; i++) {
        int k;
        cin >> k;

        //cout << "k: " << k << endl;
        auto right = lower_bound(S.begin(), S.end(), k);
        auto left = right - 1;

        //cout << "right: " << *right << endl;
        //cout << "left: " << *left << endl;

        //cout << "*right-k:" << *right-k << endl;
        //cout << "*left+(d-k):" << (*left+(d-k)) << endl;
        //cout << "k-*left:" << (k-*left) << endl;
        if((*right-k) < (k-*left)) {
            sum += *right - k;
        } else {
            sum += k - *left;
        }
    }


    cout << sum << endl;
    
    return 0;
}
