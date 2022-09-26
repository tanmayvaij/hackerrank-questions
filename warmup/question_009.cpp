#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {

    int count = 1, maxval = candles[0];
    for ( int i = 1; i < candles.size(); i++ ) {
        if ( candles[i] > maxval ) {
            count = 1;
            maxval = candles[i];
        }
        else if ( candles[i] == maxval ) count++;
    }

    return count;

}

int main () {

    vector<int> candles = { 4, 4, 1, 3 };

    cout << birthdayCakeCandles(candles) << endl;

    return 0;

}
