/*

    Compare The Triplets

    https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
    cout << endl;
}

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0, bob = 0;
    for ( int i = 0; i < a.size(); i++ ){
        if ( a[i] > b[i] ) alice++;
        else if ( a[i] < b[i] ) bob++;
    }
    return { alice, bob };
}

int main () {

    vector<int> a = { 17, 28, 30 };
    vector<int> b = { 99, 16, 8 };
    
    vector<int> ans = compareTriplets(a, b);

    printVector(ans);

    return 0;

}
