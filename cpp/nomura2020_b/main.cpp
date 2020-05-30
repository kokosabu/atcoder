#include <iostream>
#include <string>
using namespace std;

int main()
{
    string T;

    cin >> T;

#if 0
    for(int i = 0; i < (T.size()-1); i++) {
        // PDが少しでも多く、PDが作れない場合はDを多く
        // PD -> PDx1 , Dx1 = 2
        // PP -> PDx0 , Dx0 = 0
        // DP -> PDx0 , Dx1 = 1
        // DD -> PDx0 , Dx2 = 2
        // PD -> PD -> 2point
        // P? -> PD -> 2point
        // D? -> D? -> D? にして、DPDを狙う。ただし、最後の?はDにする
        // ?P -> DP -> 1point
        // ?D -> PD -> 2point
        // ?? -> PD -> 2point
        if(T[i] == 'P' && T[i+1] == '?') {
            T[i+1] = 'D';
        } else if(T[i] == 'D' && T[i+1] == '?') {
            if(i+2 == T.size()) {
                T[i+1] = 'D';
            }
        } else if(T[i] == '?' && T[i+1] == 'D') {
            T[i] = 'P';
        } else if(T[i] == '?' && T[i+1] == 'P') {
            T[i] = 'D';
        } else if(T[i] == '?' && T[i+1] == '?') {
            T[i] = 'P';
            T[i+1] = 'D';
        }
        //cout << T << endl;
    }
#endif
    for(int i = 0; i < T.size(); i++) {
        if(T[i] == '?') {
            T[i] = 'D';
        }
    }

    cout << T << endl;

    return 0;
}
