/*

    Modified Kaprekar Numbers

    https://www.hackerrank.com/challenges/kaprekar-numbers/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

bool isKaprekar(long n) {
    if ( n == 0 || n == 1 ) return true;
    int digits = to_string(n).size();
    string sq = to_string(n*n);
    if ( sq.size() == 1 ) return false;
    string l = sq.substr(0, (long) sq.size()-digits);
    string r = sq.substr((long) sq.size()-digits, digits);
    return stoi(l)+stoi(r)==n;
}

void kaprekarNumbers(int p, int q) {
    int out = false;
    for ( int i = p; i <= q; i++ ) {
        if ( isKaprekar(i) ) {
            cout << i << " ";
            out = true;
        } 
    }
    if ( out == false ) cout << "INVALID RANGE";
}

int main () {

    kaprekarNumbers(1, 99999);

    return 0;

}
