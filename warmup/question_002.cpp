/*

    Simple Array Sum

    https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for ( int i = 0; i < ar.size(); i++ ) sum += ar[i];
    return sum;
}

int main () {

    vector<int> ar = { 1 ,2 ,3 ,4 ,10 ,11 };

    cout << simpleArraySum(ar) << endl;

    return 0;

}
