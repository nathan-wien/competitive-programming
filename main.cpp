#include <bits/stdc++.h>

using namespace std;

int main() {
    char c = 'z';
    cout << c - 'a' << "\n";
    map<char, int> mp;
    vector<int> v;
    sort(v.begin(), v.end());
    int index = max_element(v.begin(), v.end()) - v.begin();
    int max_val = *max_element(v.begin(), v.end());
    return 0;
}
