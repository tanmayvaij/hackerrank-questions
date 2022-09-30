/*

    Picking Numbers

    https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int pickingNumbers(vector<int> a) {
    int ans = 2;
    vector<int> check( 102 , 0 );
    for ( int i = 0; i < a.size(); i++ ) check[a[i]]++;
    for ( int i = 0; i < 101; i++ )  ans = max( ans, check[i] + check[i+1] );
    return ans;
}

int main () {

    vector<int> a(100, 66);

    cout << pickingNumbers(a) << endl;

    return 0;

}
