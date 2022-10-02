/*

    Beautiful Days at the Movies

    https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int revNum(int n) {
    int num = 0;
    while ( n != 0 ) {
        int digit = n % 10;
        n /= 10;
        num *= 10;
        num += digit;
    }
    return num;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for ( int x = i; x <= j; x++ ) if ( abs(x - revNum(x)) % k == 0 ) count++;
    return count;
}

int main () {

    cout << beautifulDays(20, 23, 6) << endl; 

    return 0;

}
