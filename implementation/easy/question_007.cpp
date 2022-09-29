/*

    Divisible Sum Pairs

    https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for ( int i = 0; i < n-1; i++ ) {
        for ( int j = i+1; j < n; j++ ) 
            if ( i<j && (ar[i]+ar[j])%k==0 ) count++;
    }
    return count;
}

int main () {

    vector<int> ar = {1, 3, 2, 6, 1, 2};
    int n = 6, k = 3;

    cout << divisibleSumPairs(6, 3, ar) << endl;

    return 0;

}
