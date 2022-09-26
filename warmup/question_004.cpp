/*

    A Very Big Sum

    https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    long int sum= 0;
    for ( int i = 0; i < ar.size(); i++ ) sum+= ar[i];
    return sum;
}

int main () {

    vector<long> ar = { 1000000001, 1000000002, 1000000003, 1000000004, 1000000005 };
    cout << aVeryBigSum(ar) << endl;

    return 0;

}
