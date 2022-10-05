/*

    Equalize the Array

    https://www.hackerrank.com/challenges/equality-in-a-array/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int equalizeArray(vector<int> arr) {
    vector<int> check(102, -1);
    int x = 0, mx = 0;
    for ( int i = 0; i < arr.size(); i++ ) check[arr[i]]++;
    for ( int i = 0; i < check.size(); i++ ) 
        if ( check[i] >= 0 ) mx = max(mx, check[i]);
    return arr.size() - (mx + 1);
}

int main () {

    vector<int> arr = {1, 2, 3, 1, 2, 3, 3, 3};

    cout << equalizeArray(arr) << endl;

    return 0;

}
