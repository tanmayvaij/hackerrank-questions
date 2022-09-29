/*

    Bill Division

    https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {

    int sum = 0;
    for ( int i = 0; i < bill.size(); i++ ) sum += bill[i];
    sum -= bill[k];
    sum /= 2;

    if ( b == sum ) cout << "Bon Appetit";
    else cout << b-sum;

}

int main() {

    vector<int> bill = { 3, 10, 2, 9 };
    int k = 1, b = 7;

    bonAppetit(bill, k, b);

    return 0;

}
