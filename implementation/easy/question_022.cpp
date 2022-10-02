/*

    Viral Advertising

    https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int viralAdvertising(int n) {
    int p = 5, count = 0;
    for ( int i = 1; i <= n; i++ ) {
        count += (p / 2);
        p = (p/2) * 3;
    }
    return count;
}

int main () {

    cout << viralAdvertising(5) << endl;

    return 0;

}
