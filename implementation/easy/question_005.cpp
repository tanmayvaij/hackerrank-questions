/*

    Breaking the Records

    https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> breakingRecords(vector<int> scores) {

    int h = scores[0], l = scores[0], hc = 0, lc = 0;

    for ( int i = 1; i < scores.size(); i++ ) {
        if ( scores[i] > h ) {
            hc++;
            h = scores[i];
        }
        else if ( scores[i] < l ) {
            lc++;
            l = scores[i];
        }
    }

    return { hc, lc };

}

int main () {

    vector<int> scores = { 10, 5, 20, 20, 4, 5, 2, 25, 1 };
    vector<int> ans = breakingRecords(scores);

    printVector(ans);

    return 0;

}
