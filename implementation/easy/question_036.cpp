/*

    Taum and B'day

    https://www.hackerrank.com/challenges/taum-and-bday/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

long long taumBday(long long b, long long w, long long bc, long long wc, long long z) {
    long long res = (b*bc) + (w*wc);
    res = min( res, (long long) b*(wc+z)+w*wc );
    res = min(res, (long long) b*bc+w*(bc+z));
    return res;
}

int main () {

    long long b = 3, w = 5, bc = 3, wc = 4, z = 1;

    cout << taumBday(b, w, bc, wc, z) << endl;

    return 0;

}
