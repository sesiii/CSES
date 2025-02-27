#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll algorithm(ll n){
    if(n==1){
        return 0;
    }
    if(n%2==0){
        n/=2;
    }
    else{
        n*=3;
        n+=1;
 
    }
    cout<<n<<" ";
    return algorithm(n);
}
int main(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    algorithm(n);
 
}