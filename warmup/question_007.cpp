/*

    Staircase

    https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

void staircase(int n) {
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            j <= n - i ? cout << " " : cout << "#"; 
        }
        cout << endl;
    }
}

int main () {

    staircase(6);

    return 0;

}
