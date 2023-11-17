#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
# define ll long long

ll solve(vector<ll> n){
    ll sum = 1;
    for(ll i: n){ sum *= i;}
    sum /= n.size();
    return sum;
}



int main(){
    ll n; cin >> n;
    vector<ll> v;
    for(ll i = 0; i < n;i++){
        ll a; cin >> a;
        v.push_back(a);
    }

    vector<ll> dp(n+1,0);
    vector<pair<ll,ll>> p (n+1, {0,0});
    dp[0] = 0;

    for(ll i = 1; i < n+1; i++){
        for(ll l = 0; l < n - i + 1; l++){
            vector<ll> orginal;
            for(ll j = l; j < l+i; j++){
                orginal.push_back(v[j]);
            }
            if(solve(orginal) > dp[i]){
                dp[i] = solve(orginal);
                p[i] = {l+1,l+i};
            }
        }
    }


    ll m = 0;
    for(ll i: dp){
        if (m < i){
            m = i;
        }
    }

    for(ll i = n; i >= 0; i--){
        if(dp[i] == m){
            cout << p[i].first << " " << p[i].second;
            break;
        }
    }
}


