/*

    Jumping on the Clouds

    https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c) {

    int i = 0;
    int count = 0;

    while ( i < c.size()-1 ) {
        if ( c[i+2] == 1 ) i++;
        else i+=2;
        count++;
    }

    return count;

}

int main () {

    vector<int> c = { 0, 0, 0, 0, 1, 0 };

    cout << jumpingOnClouds(c) << endl;

    return 0;

}
