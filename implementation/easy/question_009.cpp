/*

    Day of the Programmer

    https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

string dayOfProgrammer(int year) {

    string s = "";

    if ( year == 1918 ) {
        s = "26.09.1918";
        return s;
    }

    else if ( (year<1918 && year%4==0) || ((year>1918) && ((year%400==0) || (year%4==0 && year%100!=0))) ) {
        s = "12.09." + year;
        return s;
    }

    s = "13.09."+ year;
    return s;

}

int main () {

    cout << dayOfProgrammer(2017) << endl;

    return 0;

}
