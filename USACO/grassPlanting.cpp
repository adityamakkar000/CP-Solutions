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
  freopen("planting.in","r",stdin);
  freopen("planting.out", "w", stdout);

  int n; cin >> n;
  vector<int>v[n];

  for(int i = 0; i < n-1; i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int m = 0;
  for(auto j: v){
   m = max(m,static_cast<int>(j.size()));
  }
  cout << m + 1 << endl;
}


