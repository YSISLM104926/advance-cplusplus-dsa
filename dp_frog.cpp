#include <bits/stdc++.h>
using namespace std;

 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
const int N = 1e5+10;
int h[N];
int dp[N];

int func(int i) {
    if(i == 0) return 0;
    int cost = INT_MAX;
    if(dp[i] != -1) return dp[i];
    cost = min(cost, func(i-1) + abs(h[i] - h[i-1]));
    if(i > 1)
        cost = min(cost, func(i-2) + abs(h[i] - h[i-2]));
    return dp[i] = cost;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >>t;
    while(t--) {
        for(ll i = 0; i<n; i++) {
            cin >> h[i];
        }
        cout << func(n-1) << endl;
    }
    return 0;
}