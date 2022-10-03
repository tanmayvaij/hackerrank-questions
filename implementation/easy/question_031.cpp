/*

    Cut The Sticks

    https://www.hackerrank.com/challenges/cut-the-sticks/problem?isFullScreen=true

*/

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

void printVector(vector<int> v) {
    for ( auto m: v ) cout << m << " ";
}

vector<int> cutTheSticks(vector<int> arr) {

    sort(arr.begin(), arr.end());

    int firstidx = 0;
    int arlen = arr.size();
    vector<int> ans = { arlen };
    int elem;

    while ( firstidx < arr.size() ) {

        elem = arr[firstidx];

        for ( int j = firstidx; j < arr.size(); j++ ) {

            arr[j] -= elem;

            if ( arr[j] == 0 ) { 
                arlen -= 1; 
                firstidx++;
            }

        }

        ans.push_back(arlen);

    }

    ans.pop_back();

    return ans;

}

int main () {

    vector<int> arr = { 1, 2, 3, 4, 3, 3, 2, 1 };

    vector<int> ans = cutTheSticks(arr);

    printVector(ans);

    return 0;

}
