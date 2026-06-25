#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll MOD = 1e9 + 7;
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b != 0) {
        if(b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << binpow(45,2) nl;
}