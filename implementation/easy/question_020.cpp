/*

    Angry Professor

    https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    int count = 0;
    for ( int i = 0; i < a.size(); i++ ) if ( a[i] <= 0 ) count++;
    if ( count >= k ) return "NO";
    return "YES";
}

int main () {

    vector<int> a = { -1, -3, 4, 2 };
    int k = 3;

    cout << angryProfessor(k, a) << endl;

    return 0;

}
