/*

    Sales By Match

    https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    vector<int> test(101, 0);
    int np = 0;
    for ( int i = 0; i < n; i++ ) 
        ( test[ar[i]] == 0 ) ? test[ar[i]]++ : test[ar[i]]--;
    for ( int i = 0; i < 101; i++ ) 
        if ( test[i] == 1 ) np++;
    return (n - np)/2;
}

int main () {
    vector<int>ar = { 10, 20, 20, 10, 10, 30, 50, 10, 20 };
    cout << sockMerchant(9, ar) << endl;
    return 0;
}