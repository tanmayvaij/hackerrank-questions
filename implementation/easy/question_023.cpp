/*

    Save The Prisoner

    https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true

*/

#include <iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    return (s+m-2) % n + 1;                                     
}

int main () {
    
    cout << saveThePrisoner(3, 7, 3) << endl;

    return 0;

}
