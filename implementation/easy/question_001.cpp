/*

    Grading Students

    https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
    cout << endl;
}

vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans;
    for ( auto marks: grades ) {
        if ( marks >=  38 ) {
            if ( (marks + 1) % 5 == 0 ) ans.push_back(marks+1);
            else if ( (marks + 2) % 5 == 0 ) ans.push_back(marks+2);
            else ans.push_back(marks);
        }
        else ans.push_back(marks);
    }
    return ans;
}

int main () {

    vector<int> grades = { 73, 67, 38, 33 };

    vector<int> ans = gradingStudents(grades);

    printVector(ans);

    return 0;

}
