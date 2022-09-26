/*

    Plus Minus

    https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void plusMinus(vector<int> arr) {

    int positive = 0, negative = 0, zero = 0, n = arr.size(); 

    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] > 0 ) positive++;
        else if ( arr[i] < 0 ) negative ++;
        else zero++;
    }

    cout << setprecision(7) << (float) positive / n << endl;
    cout << setprecision(7) << (float) negative / n << endl;
    cout << setprecision(7) << (float) zero / n << endl;

}

int main () {

    vector<int> arr = { -4, 3, -9, 0, 4, 1 };

    plusMinus(arr);

    return 0;

}
