/*

    Time Conversion

    https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

string timeConversion(string s) {

    string military_time= "";
    
    if ( s.substr(0, 2) ==  "12" && s.substr(8, 2) == "AM" ) {
        military_time.append("00");
        military_time.append(s.substr(2, 6));
    }
    else if ( s.substr(8, 2) == "AM" ) {
        military_time.append(s.substr(0, 8));

    }
    else if ( s.substr(0, 2) == "12" && s.substr(8, 2) == "PM" ) {
        military_time.append(s.substr(0, 8));
    }
    else if ( s.substr(8, 2) == "PM" ) {
        int n = stoi(s.substr(0, 2));
        military_time.append(to_string(n+12));
        military_time.append(s.substr(2, 6));
    }

    return military_time;

}

int main () {

    cout << timeConversion("05:00:12PM") << endl;

    return 0;

}
