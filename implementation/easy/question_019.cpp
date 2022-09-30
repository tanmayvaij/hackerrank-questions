/*

    Utopian Tree

    https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int utopianTree(int n) {
    int h = 1;
    for ( int i = 1; i <= n; i++ ) ( i%2 != 0 ) ? h*=2 : h++;
    return h;
}

int main () {

    cout << utopianTree(5) << endl;

    return 0;

}
