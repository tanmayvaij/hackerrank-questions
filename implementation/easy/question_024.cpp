/*

    Circular Array Rotation

    https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true

*/

#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<int> v) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
    cout << endl;
}

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    for ( int i = 0; i < k; i++ ) { 
        int temp = a[a.size()-1];
        a.pop_back();
        a.insert(a.begin(), temp);
    }
    for ( int i = 0; i < queries.size(); i++ ) queries[i] = a[queries[i]];
    return queries;
}

int main () {

    vector<int> a = {3, 4, 5};
    int k = 2;
    vector<int> queries = {1, 2};

    vector<int> ans = circularArrayRotation(a, k, queries);

    printVector(ans);

    return 0;

}
