/*

    Sequence Equation

    https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
    cout << endl;
}

vector<int> permutationEquation(vector<int> p) {
    vector<int> ans;
    p.insert(p.begin(), 0);
    for ( int i = 1; i < p.size(); i++ ) {
        for ( int j = 1; j < p.size(); j++ ) 
            if (p[p[j]] == i) ans.push_back(j);
    }
    return ans;
}

int main () {

    vector<int> p = { 4, 3, 5, 1, 2 };

    vector<int> ans = permutationEquation(p);

    printVector(ans);

    return 0;

}
