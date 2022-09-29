/*

    Subarray Division

    https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {

    int count = 0, st = 0, en = m-1, arsum = 0;
    for ( int i = st; i <= en; i++ ) arsum += s[i];

    while ( en <= s.size()-1 ) {

        if ( arsum == d ) count++;

        arsum -= s[st];
        st++;
        en++;
        arsum += s[en];

    }

    return  count;

}

int main() {

    vector<int> s = { 1, 2, 1, 3, 2};
    int d = 3, m = 2;

    cout << birthday(s, d, m) << endl;

    return 0;

}
