/*

    Repeated String

    https://www.hackerrank.com/challenges/repeated-string/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

long repeatedString(string s, long n) {
    if ( s.size() == 1 && s=="a" ) return n;

    long int count = 0;

    for ( int i = 0; i < s.size(); i++ ) if ( s[i] == 'a' ) count++;

    long d = n / s.size();
    long r = n - (d*s.size());
    
    if ( r != 0 ) {
        count *= d;
        for ( int i = 0; i < r; i++ ) if ( s[i] == 'a' ) count++;
    }
    
    else if ( r == 0 ) count *= d;
    
    return count;
}

int main () {

    string s = "bcbccacaacbbacabcabccacbccbababbbbabcccbbcbcaccababccbcbcaabbbaabbcaabbbbbbabcbcbbcaccbccaabacbbacbc";
    long int n = 649606239668;

    cout << repeatedString(s, n) << endl;

    return 0;

}
