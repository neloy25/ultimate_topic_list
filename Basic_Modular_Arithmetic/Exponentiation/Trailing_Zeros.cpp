#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll res = 0;
    for(ll i = 5; i <= n; i *= 5) {
        res+= (n / i);
    }
    cout << res nl;
}