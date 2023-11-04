#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int needed_value = k - A[i];
        if (mp.find(needed_value) != mp.end()) {
            cout << "YES" << endl;
            return 0; 
        }
        mp[A[i]] = 1;
    }

    cout << "NO" << endl;

    return 0;
}
