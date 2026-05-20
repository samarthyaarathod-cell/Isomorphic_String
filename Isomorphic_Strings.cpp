#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    vector<int> mapS(256, -1);
    vector<int> mapT(256, -1);

    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        if (mapS[c1] != mapT[c2]) {
            return false;
        }

        mapS[c1] = mapT[c2] = i;
    }

    return true;
}

int main() {
    string s = "paper", t = "title";
    cout << (isIsomorphic(s, t) ? "true" : "false");
    return 0;
}