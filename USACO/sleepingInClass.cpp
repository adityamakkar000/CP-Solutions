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

bool c(vector<int> v){
  int prev = v[0]
  for(int i = 1; i < n; i++){
    if(prev != v[i]) return false;
    prev = v[i];
  }
}


void solve(){
  int n; cin >> n;
  vector<int> v;
  int m = 0;
  for(int i = 0; i < n; i++){
     int a; cin >> a;
     m = max(a,m);
     v.push_back(a);
  }

  int count = 0;
  bool check = c(v);

  while(!check){
    vector<int> temp;
    for(int i = 1; i < n-1; i += 2){
      if(v[i-1] > )
    }

  }


}

int32_t main(){

  // freopen("balancing.in","r",stdin);
  // freopen("balancing.out", "w", stdout);

  int t; cin >>t;
  while(t--){
    solve();
  }





}
