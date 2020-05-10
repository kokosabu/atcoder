#include <iostream>
using namespace std;

int main()
{
    int N;
    long long K;
    cin >> N >> K;
    int A[N];
    int B[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = 0;
    }
    int route[N];
    int loop_start;

    int count = 0;
    int current = 1;
    //B[0] = 1;
    while(1) {
        route[count] = current;
        if(B[current-1] != 0) {
            loop_start = B[current-1];
            //cout << "[[" << loop_start << "]]" << endl;
            break;
        }
        B[current-1] = count;
        count += 1;
        current = A[current-1];
    }

    //cout << count << endl;
    //for(int i = 0; i < count; i++) {
    //    cout << i << ", " << route[i] << ", " << B[route[i]-1] << endl;
    //}
    //cout << A[route[count-1]-1] << endl;

    if(A[route[count-1]-1] == 1) {
        int without_loop = K % count;
        //cout << without_loop << endl;
        cout << route[without_loop] << endl;
    } else if(K >= loop_start) {
        //int without_loop = (K % count)-1;
        //int without_loop = (K-2) % (count-1);
        int without_loop = (K-loop_start) % (count-loop_start);
        //cout << without_loop << endl;
        cout << route[without_loop+loop_start] << endl;
    } else {
        //int without_loop = (K-loop_start) % (count-loop_start);
        //cout << route[without_loop+loop_start] << endl;
        cout << route[K] << endl;
    }


    return 0;
}
