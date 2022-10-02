/*

    Find Digits

    https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int findDigits(int n) {
    int num = n, count = 0;
    while ( n != 0 ) {
        int digit = n%10;
        n /= 10;
        if ( digit != 0 && num % digit == 0 ) count++;
    }
    return count;
}

int main() {

    cout << findDigits(1012) << endl;

    return 0;

}
