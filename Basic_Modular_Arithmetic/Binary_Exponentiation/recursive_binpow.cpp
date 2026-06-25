#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll MOD = 1e9 + 7;
ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    ll res = binpow(a, b / 2);

    if (b & 1)
        return (res * res % MOD) * a % MOD;
    else
        return res * res % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << binpow(3,13) nl;
}