/*

    Mini-Max Sum

    https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long minsum = 0, maxsum = 0; 
    sort(arr.begin(), arr.end());
    for ( int i = 0; i < arr.size(); i++ ) {
        minsum += arr[i];
        maxsum += arr[i];
    }
    minsum -= arr[arr.size()-1];
    maxsum -= arr[0];
    cout << minsum << " " << maxsum << endl;
}

int main () {

    vector<int> arr = { 1, 2, 3, 4, 5 };

    miniMaxSum(arr);

    return 0;

}
