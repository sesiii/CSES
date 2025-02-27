#include <bits/stdc++.h>
using namespace std;

#define ll long long

void algorithm(ll n)
{
    if (n == 1) {
        cout << "1\n";
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
    } else {
        for (ll i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (ll i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ll n;
    cin >> n;
    algorithm(n);
    return 0;
}
