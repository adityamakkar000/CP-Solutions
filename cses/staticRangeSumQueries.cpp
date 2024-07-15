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

int32_t main(){
  int n, q; cin >> n >> q;
  vector<int> v(n+1,0);
  v[0] = 0;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v[i+1] = v[i] + a;
  }

  for(int i = 0; i < q; i++){
    int l,r; cin >> l >> r;
    int ans = v[r] - v[l-1];
    cout << ans << endl;
  }

}
