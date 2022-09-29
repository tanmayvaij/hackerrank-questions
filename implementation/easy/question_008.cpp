/*

    Migratory Birds

    https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int migratoryBirds(vector<int> arr) {

    vector<int> count_arr(6, 0);
    int maxVal = INT_MIN, max_index = 0;

    for ( int i = 0; i < arr.size(); i++ ) count_arr[arr[i]]++;

    for ( int i = 1; i < 6; i++ ) {
        if ( count_arr[i] > maxVal ) {
            maxVal = count_arr[i];
            max_index = i;
        }
    }

    return max_index;

}

int main () {

    vector<int> arr = { 1, 4, 4, 4, 5, 3 };

    cout << migratoryBirds(arr) << endl;

    return 0;

}
