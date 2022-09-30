/*

    The Hurdle Race

    https://www.hackerrank.com/challenges/the-hurdle-race/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int maxNum = -1;
    for ( int i = 0; i < height.size() - 1; i++ ) 
        if ( height[i] > maxNum ) maxNum = height[i]; 
    if ( k >= maxNum ) return 0;
    else return maxNum-k;
}

int main () {

    vector<int> height = { 1, 6, 3, 5, 2 };
    int k = 4;

    cout << hurdleRace(k, height) << endl;

    return 0;

}