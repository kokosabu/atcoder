#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> t(N);
    int count = -1;
    int pre_t = 0;
    for(int i = 0; i < N; i++) {
        int a_, t_;
        cin >> a_ >> t_;
        if(pre_t == t_) {
            if(t_ == 1) {
                a[count] += a_;
            } else if(t_ == 2) {
                a[count] = min(a[count], a_);
            } else {
                a[count] = max(a[count], a_);
            }
        } else {
            count += 1;
            a[count] = a_;
            t[count] = t_;
        }
        pre_t = t_;
    }
    int Q;
    cin >> Q;
    vector<int> x(Q);

    for(int i = 0; i < Q; i++) {
        cin >> x[i];
    }

    for(int i = 0; i <= count; i++) {
        if(t[i] == 1) {
            for_each(x.begin(), x.end(), [a,i](int &x) { x = x + a[i]; });
        } else if(t[i] == 2) {
            for_each(x.begin(), x.end(), [a,i](int &x) { x = max(x, a[i]); });
        } else {
            for_each(x.begin(), x.end(), [a,i](int &x) { x = min(x, a[i]); });
        }
    }

    for_each(x.begin(), x.end(), [](int x) { std::cout << x << std::endl; });

    return 0;
}

#if 0
1 - 1 : (x+a1)+a2   -> x+(a1+a2)
1 - 2 : max((x+a1), a2)
1 - 3 : min((x+a1), a2)
2 - 1 : max(x, a1)+a2
2 - 2 : max(max(x, a1), a2) -> max(x, min(a1, a2))
2 - 3 : min(max(x, a1), a2)
3 - 1 : 
3 - 2
3 - 3
#endif
