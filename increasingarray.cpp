#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 10^7

void algorithm(vector<ll>arr){
    ll n=arr.size();
    ll count=0;
    for(ll i=1; i<n ; i++){
        if(arr[i]<arr[i-1]){
            count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<count<<" ";
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    algorithm(arr);
    return 0;
}