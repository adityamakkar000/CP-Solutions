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

  int n, k; cin >> n >> k;

  vector<int> v(n+1,0);
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v[i+1] = v[i] + a;
  }
  int ans = 0;

  // for(auto k: v){
  //   cout << k << " ";
  // }
  // cout << endl;

  for(int i = 0; i < n+1; i++){
    for(int j = 0; j <= i; j++){
      if(v[i]-v[j] == k){
        ans++;
      }
    }
  }
  cout << ans << endl;


}
