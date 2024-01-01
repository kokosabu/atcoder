#include <iostream>
using namespace std;

int main()
{
    int N, C;
    cin >> N >> C;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<int>::iterator current_it = min_element(a.begin(), a.end());
    int current_val = *current_it;
    *current_it = 1000000001;
    unsigned long long sum = 0;
    while(1) {
        vector<int>::iterator next_a_it = min_element(a.begin(), a.end());
        vector<int>::iterator next_b_it = min_element(b.begin(), b.end());
        if(*next_a_it == *next_b_it) {

        } else if(*next_a_it > *next_b_it) {
        } else {
        }

        current += 1;
    }


    return 0;
}
