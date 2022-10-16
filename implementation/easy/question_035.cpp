/*

    ACM ICPC

    https://www.hackerrank.com/challenges/acm-icpc-team/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> arr ) {
    for ( int i = 0; i < arr.size(); i++ ) cout << arr[i] << " ";
    cout << endl; 
}

int countTopics (string p1, string p2) {
    int topics = 0;
    for ( int i = 0; i < p1.size(); i++ ) 
        if ( p1[i] == '1' || p2[i] == '1' ) topics++;
    return topics;
}

vector<int> acmTeam(vector<string> topic) {

    vector<int> check(1000, 0);
    
    for ( int i = 0; i < topic.size(); i++ ) {
        for ( int j = i + 1; j < topic.size(); j++ ) 
            check[countTopics(topic[i], topic[j])]++;
    }

    for ( int i = 999; i >= 0; i-- ) 
        if ( check[i] != 0 ) return { i, check[i] }; 

    return {0,0};

}

int main () {

    vector<string> topic = { 
        "10101", 
        "11100", 
        "11010", 
        "00101" 
    };

    vector<int> ans = acmTeam(topic);

    printVector(ans);

    return 0;

}
