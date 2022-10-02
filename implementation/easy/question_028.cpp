#include <iostream>
using namespace std;

string appendAndDelete(string s, string t, int k) {

    int c = 0, lim = min(s.size(), t.size());
    int o = s.size() + t.size();

    for ( int i = 0; i < lim; i++ ) {
        if ( s[i] != t[i] ) break;
        else c++;
    }

    if (( c == 0 || s == t ) && ( o <= k || o+1 <= k )) {

        if ( (k-o)%2==0 || (k-o+1)%2==0  ) return "Yes";

    }

    if (( o<=k || o+1<=k ) && ((k-o)%2==0 || (k-o+1)%2==0) ) {
        return "Yes";
    }

    o -= 2*c;

    if ( k >= o && (k-o)%2==0 ) return "Yes";

    return "No";

}

int main () {

    string s = "asdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcv";
    string t = "bsdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcv";
    int k = 100;

    cout << appendAndDelete(s, t, k) << endl;

    return 0;

}
