/*

    Counting Valleys

    https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int countingValleys(int steps, string path) {

    int count = 0, sum = 0;

    vector<int> p = {0};

    for ( int i = 0; i < steps; i++ ) {
        ( path[i] == 'U' ) ? sum++ : sum--;
        p.push_back(sum);
    }

    for ( int i = 1; i <= steps; i++ ) 
        if ( p[i] == 0 && p[i-1] < 0 ) count++;
    

    return count;
    
}

int main () {

    int steps = 8;
    string path = "UDDDUDUU";

    cout << countingValleys(steps, path) << endl;

    return 0;

}
