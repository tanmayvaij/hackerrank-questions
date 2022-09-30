/*

    Drawing Book

    https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int pageCount(int n, int p) {

    if ( n % 2 == 0 ) n++;

    int c1 = 0, c2 = 0;

    for ( int i = 0; i <= n-1; i+=2 ) {
        if ( i == p || i+1 == p ) break;
        c1++;
    }

    for ( int i = n; i >= 1; i-=2 ) {
        if ( i == p || i-1 == p ) break;
        c2++;
    }

    return min(c1, c2);
    
}

int main () {

    cout << pageCount(59867, 35733) << endl;

    return 0;

}
