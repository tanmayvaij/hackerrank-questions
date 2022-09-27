/*

    Apple and Orange

    https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple_count = 0, orange_count = 0;
    for ( int i = 0; i < apples.size(); i++ ) { 
        int dist = apples[i] + a; 
        if ( dist >= s && dist <= t ) apple_count++;
    }
    for ( int i = 0; i < oranges.size(); i++ ) {
        int dist = oranges[i] + b; 
        if ( dist >= s && dist <= t ) orange_count++;
    }
    cout << apple_count << endl;
    cout << orange_count << endl;
}

int main () {

// 7 11
// 5 15
// 3 2
// -2 2 1
// 5 -6

    vector<int> apples = { -2, 2, 1 };
    vector<int> oranges = { 5, -6 };

    countApplesAndOranges(7, 11, 5, 15, apples, oranges);

    return 0;

}
