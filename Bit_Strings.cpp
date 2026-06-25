#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll res = 1;
    for(int i = 0; i < n; i++) {
        res = (res * 2) % MOD;
    }
    cout << res nl;
}