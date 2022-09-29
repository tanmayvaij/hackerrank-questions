/*

    Between Two Sets

    https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lcm(int x, int y) {
    return (x*y) / __gcd(x, y); 
}

int getTotalX(vector<int> a, vector<int> b) {

    int alcm = a[0], bgcd = b[0], count = 0;

    for ( int i = 1; i < a.size(); i++ ) alcm = lcm( alcm, a[i] );

    for ( int j = 1; j < b.size(); j++ ) bgcd = __gcd( bgcd, b[j] );

    if ( bgcd % alcm == 0 ) {
        if ( bgcd == alcm ) count = 1;
        else count = 2;
    }
    else return 0;

    for ( int i = 2*alcm; i < bgcd; i+=alcm ) if ( bgcd % i == 0 ) count ++;

    return count;    

}

int main () {

    vector<int> a = { 2, 4 };
    vector<int> b = { 16, 32, 96 };

    cout << getTotalX(a, b) << endl;

    return 0;

}
