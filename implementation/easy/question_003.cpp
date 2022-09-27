/*

    Number Line Jumps

    https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int denom = ( v2  - v1 );
    if ( denom == 0 ) return "NO";
    int n1 = ( x1 - x2 ) / denom;
    cout << n1 << endl;
    float n2 = (float) ( x1 - x2 ) /  (float) ( v2  - v1 );
    if ( n1 < 0 || n2-n1 != 0 ) return "NO";
    return "YES";
} 

int main () {

    cout << kangaroo(43, 2, 70, 2) << endl;

    return 0;

}
