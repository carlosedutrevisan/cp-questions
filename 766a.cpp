#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int maxsize = max (s1.size(), s2.size());

    if (s1 == s2) cout << "-1" << endl;
    else cout << maxsize << endl; 

    return 0;
}
