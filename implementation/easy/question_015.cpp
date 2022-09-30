/*

    Cats and a Mouse

    https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

string catAndMouse(int x, int y, int z) {
    int d1 = abs(x-z), d2 = abs(y-z);
    if ( d1 == d2 ) return "Mouse C";
    else if ( d1 > d2 ) return "Cat B";
    return "Cat A";
}

int main () {

    cout << catAndMouse(1, 3, 2) << endl;

    return 0;

}
