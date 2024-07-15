

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
  int n, k; cin >> n >> k;
  vector<int> v;
  for(int i = n; i > 0; i--){
    v.push_back(i);
  }
  int c = n;
  for(int i = 0; i < k; i++){
    int x = v[0];
    v.insert(v.begin() + x, x);
    v.erase(v.begin());
  }
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
}

int32_t main(){
  int t; cin >> t;
  while(t--){
      solve();
  }
}
