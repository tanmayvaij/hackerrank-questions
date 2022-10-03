/*

    Sherlock and Squares

    https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=true

*/

#include <iostream>
#include <math.h>
using namespace std;

int squares(int a, int b) {
   return floor(sqrt(b)) - ceil(sqrt(a)) + 1 ;
}

int main () {

    cout << squares(24, 49) << endl;    

    return 0;

}
