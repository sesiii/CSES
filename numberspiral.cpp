#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 10^7


void algorithm(ll x, ll y) {
    ll z = max(x, y);
    ll z2 = z * z;
    ll ans;
    if (z % 2 == 0) {
        if (x == z) {
            ans = z2 - y + 1;
        } else {
            ans = z2 - (2 * z - 1) + x;
        }
    } else {
        if (y == z) {
            ans = z2 - x + 1;
        } else {
            ans = z2 - (2 * z - 1) + y;
        }
    }
    cout << ans << endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        algorithm(x,y);
    }
    return 0;
}