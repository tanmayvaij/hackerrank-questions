/*

    Jumping on the clouds

    https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {

    int n = c.size();
    int e = 100;
    int i = 0;

    while ( true ) {
        i = (i + k) % n;
        ( c[i] == 0 ) ? e -= 1 : e -= 3 ;
        if ( i==0 ) break;
    }

    return e;

}

int main () {

    vector<int> c = {0, 0, 1, 0, 0, 1, 1, 0};
    int k = 2;

    return 0;

}
