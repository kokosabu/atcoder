#include <iostream>
using namespace std;

int main()
{
    // aabb // a = 0, b = 1
    // abab
    // abba
    // baab
    // baba
    // bbaa
    //
    // 110000
    // 101000
    // 100100
    // 100010
    // 100001
    // 011000
    // 010100
    // 010010
    // 010001 17 
    // 001100 12
    // 001010 10
    // 001001 8
    // 000110 6  // 1が連続していたら繰り上がり
    // 000101 5
    // 000011 3  // 1が連続していたら繰り上がり
    //
    //
    // 111000
    // 101100
    // 100110
    // 100011
    // 011100
    // 010110
    // 010011
    // 001110
    // 001011
    // 000111
    //
    // 111000
    // 101100
    // 101010
    // 101001
    // 100110
    // 100101
    // 100011
    // 011100 : 30
    // 011010 : 26
    // 011001 : 25
    // 010110 : 22
    // 010101 : 21
    // 010011 : 19
    // 001110 : 14
    // 001101 : 13
    // 001011 : 11
    // 000111 : 7
    //
    //
    // https://examist.jp/mathematics/baainokazu/jisyo-jyunretu/
    // 0????? : 5! = 5*4*3*2*1 = 120 -> 違う
    // 0か1の組み合わせなので重複を踏まえて計算が必要
    // ->
    // 00???? : 4! = 
    // 1?????
    return 0;
}