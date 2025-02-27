#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
void algorithm(vector<ll>& nums, ll n) {
    ll sum = 0;
    ll sum_till_n = (n * (n + 1)) / 2;
    for (ll i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    ll ans = sum_till_n - sum;
    cout << ans << " ";
}
 
int main() {
    ll n;
    cin >> n;
    vector<ll> nums(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }
    algorithm(nums, n);
    return 0;
}