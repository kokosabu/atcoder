#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A_left(pow(2, N-1));
    for(int i = 0; i < pow(2, N-1); i++) {
        cin >> A_left[i];
    }
    vector<int> A_right(pow(2, N-1));
    for(int i = 0; i < pow(2, N-1); i++) {
        cin >> A_right[i];
    }
    vector<int>::iterator left_max_it  = max_element(A_left.begin(), A_left.end());
    vector<int>::iterator right_max_it = max_element(A_right.begin(), A_right.end());
    
    if(*left_max_it > *right_max_it) {
        cout << distance(A_right.begin(), right_max_it)+pow(2,N-1)+1 << endl;
    } else {
        cout << distance(A_left.begin(), left_max_it)+1 << endl;
    }
    return 0;
}
