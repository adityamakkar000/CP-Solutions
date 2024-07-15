#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int


int32_t main(){

  int n; cin >> n;
  vector<int> v(n+1,0);
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v[i+1] = (v[i] + a);
  }

  map<int, int> m;
  for(auto k: v){
    m[k%n] += 1;
  }

  int ans = 0;

  for(auto k: v){
    ans += m[(n-k)%n];
  }
  cout << ans << endl;


}
