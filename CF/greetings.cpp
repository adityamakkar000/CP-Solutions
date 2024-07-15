#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long

void solve(){
  int n; cin >> n;
  vector<pair<int,int>> v (n, make_pair(0,0));
  for(auto &x: v){
    cin >> x.first >> x.second;
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for(int i = 0; i < n-1; i++){
    int temp = v[i].second;
    for(int j = i+1; j < n; j++){
      if(v[j].second <= temp) ans++;
    }
  }
  cout << ans << endl; 

}

int32_t main(){
  int t; cin >> t;
  while(t--){
    solve();
  }

}
