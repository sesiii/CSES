


#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 10^7
 
void algorithm(string c){
    int max_len=1, current_len=1;
    for(ll i=1; i<c.length(); i++){
        if(c[i] == c[i-1]){
            current_len++;
        } else {
            current_len = 1;
        }
        if(current_len > max_len){
            max_len = current_len;
        }
    }
    cout << max_len << " ";
}
int main()
{
    string c;
    cin >> c;
    
    algorithm(c);
    return 0;
}