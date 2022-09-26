/*

    Diagonal Difference

    https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {

    int d1 = 0, d2 = 0, order = arr.size();

    for ( int i = 0; i < order; i++ ) d1 += arr[i][i];

    int c = order - 1;
    for ( int i = 0; i < order; i++) {
        d2 += arr[i][c];
        c--;
    }

    return abs(d1-d2);

}

int main () {

    vector<vector<int>> matrix = {
        { 11, 2, 4 },
        { 4, 5, 6 },
        { 10, 8, -12}
    };

    cout << diagonalDifference(matrix) << endl;

    return 0;

}
