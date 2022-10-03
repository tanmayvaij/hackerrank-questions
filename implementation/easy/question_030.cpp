/*

    Library Fine

    https://www.hackerrank.com/challenges/library-fine/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {

    if ( d1 <= d2 && m1 <= m2 && y1 <= y2 ) return 0;
    
    else if ( d1 > d2 && m1 < m2 && y1 <= y2 ) return 0;
    
    else if ( d1 > d2 && m1 >= m2 && y1 < y2 ) return 0;
    
    else if ( d1 > d2 && m1 == m2 && y1 == y2 ) return (d1-d2)*15;

    else if ( m1 > m2 && y1 == y2 ) return (m1-m2)*500;

    else return 10000;

}

int main () {

    cout << libraryFine(14, 7, 2018, 5, 7, 2018) << endl;

    return 0;

}
