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


  freopen("p2.in","r",stdin);
  freopen("p3.out", "w", stdout);

  int n; cin >> n;
  vector<vector<int>> p1, p2;

  for(int i = 0; i < n ; i++){
    vector<int> t;
    for(int k = 0; k < n; k++){
      int a; cin >> a;
      t.push_back(a);
    }
    p1.push_back(t);
  }
  for(int i = 0; i < n ; i++){
    vector<int> t;
    for(int k = 0; k < n; k++){
      int a; cin >> a;
      t.push_back(a);
    }
    p2.push_back(t);
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    vector<int> o,t;
    o = p1[i], t = p2[i];
    for(int  k = 0; k < n; k++){
      if(o[k] ^ t[k]) ans++;
    }
  }
  cout << ans; 


}
