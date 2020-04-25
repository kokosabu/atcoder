#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    int a, b;
    cin >> N;

    vector<int> order(N);
    int size = 1;
    for(int i = 1; i <= N; i++) {
        order[i-1] = i;
        size *= i;
    }
    vector<int> list(size);

    a = 0;
    for(int i = 0; i < N; i++) {
        a *= 10;
        int tmp;
        cin >> tmp;
        a += tmp;
    }
    b = 0;
    for(int i = 0; i < N; i++) {
        b *= 10;
        int tmp;
        cin >> tmp;
        b += tmp;
    }

    int count = 0;
    do {
        int number = 0;
        for(int i = 0; i < N; i++) {
            number *= 10;
            number += order[i];
        }
        list[count] = number;
        count++;
    } while(next_permutation(order.begin(), order.end()));

    sort(list.begin(), list.end());
    vector<int>::iterator iter = find(list.begin(), list.end(), a);
    int a_idx = distance(list.begin(), iter);
    iter = find(list.begin(), list.end(), b);
    int b_idx = distance(list.begin(), iter);
    cout << abs(a_idx-b_idx) << endl;
    return 0;
}
