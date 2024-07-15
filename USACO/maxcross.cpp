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

  freopen("maxcross.in","r",stdin);
  freopen("maxcross.out", "w", stdout);

  int n, k, b; cin >> n >> k >> b;
  vector<int> v(n+1,0);
  set<int> broken;
  for(int i = 0; i < b; i++){
    int a; cin >> a;
    broken.insert(a);
  }
  for(int i = 0; i < n; i++){
    v[i+1] = v[i];
    if(broken.count(i+1)){ // check this properly
      v[i+1]++;
    }
  }
  int m = 100000;
  for(int i = 0; i <= n-k;i++){
    m = min(m, v[i+k]-v[i]);
  }
  cout << m << endl;

  
}
