/*

    Electronics Shop

    https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int spent = -1;
    for ( int i = 0; i < keyboards.size(); i++ ) {
        for ( int j = 0; j < drives.size(); j++ ) {
            int test_sum = keyboards[i] + drives[j];
            if ( test_sum <= b ) spent = max( spent, test_sum );
        }
    }
    return spent;
}

int main () {

    int b = 10;
    vector<int> keyboards = { 3, 1 };
    vector<int> drives = { 5, 2, 8 };

    cout << getMoneySpent(keyboards, drives, b) << endl;

    return 0;

}
