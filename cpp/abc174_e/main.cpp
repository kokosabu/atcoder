#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct node node;
struct node {
    int original;
    int div_num;
    double length;

    bool operator<( const node& right ) const {
        return length < right.length;
    }
};

int main()
{
    int N, K;

    cin >> N >> K;

#if 0
    vector<double> A(N);
    vector<int> B(N);
    vector<double> C(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = 1;
        C[i] = A[i];
    }

    for(int i = 0; i < K; i++) {
        int maxElementIndex = max_element(C.begin(),C.end()) - C.begin();
        B[maxElementIndex] += 1;
        C[maxElementIndex] = A[maxElementIndex] / B[maxElementIndex];
    }

    cout << (int)ceil(*max_element(C.begin(), C.end())) << endl;
#endif

    vector<node> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i].original;
        A[i].div_num = 1;
        A[i].length = (double)A[i].original;
    }

    for(int i = 0; i < K; i++) {
        sort(A.begin(), A.end());
        A[N-1].div_num += 1;
        A[N-1].length = (double)A[N-1].original / A[N-1].div_num;
    }
    sort(A.begin(), A.end());

    //for(int i = 0; i < N; i++) {
    //    cout << A[i].length << " ";
    //}
    //cout << endl;
   
    cout << (int)ceil(A[N-1].length) << endl;

    return 0;
}
