#include <iostream>
using namespace std;

int main()
{
    int N;
    string w;
    cin >> N;

    int count = 0;
    for(int i = 0; i < N-1; i++) {
        cin >> w;
        if(w == "TAKAHASHIKUN" || w == "Takahashikun" || w == "takahashikun") {
            count += 1;
        }
    }
    cin >> w;
    w = w.substr(0, w.size()-1);
    if(w == "TAKAHASHIKUN" || w == "Takahashikun" || w == "takahashikun") {
        count += 1;
    }
    cout << count << endl;
    return 0;
}
