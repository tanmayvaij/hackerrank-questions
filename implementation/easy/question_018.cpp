/*

    Designer PDF Viewer

    https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=true

*/

#include <iostream>
#include <vector>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    vector<int> heights;
    int wordval, maxVal = -1;
    for ( int i = 0; i < word.size(); i++ ) {
        wordval = h[word[i] - 97];
        heights.push_back( wordval );
        if (  wordval > maxVal ) maxVal = wordval;
    }
    return word.size() * maxVal;
}

int main () {

    vector<int> h = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
    string word = "zaba";

    cout << designerPdfViewer(h, word) << endl;

    return 0;

}
