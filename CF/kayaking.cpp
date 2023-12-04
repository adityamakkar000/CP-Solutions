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
  int n; cin >> n;
  vector<int> v (2*n,0);
  for(int i = 0; i < 2*n; i++) cin >> v[i];

  sort(v.begin(), v.end());
  set<int> m;

  for(int i = 0; i < 2*n - 1; i++){
    if(m.size() < 2) m.insert(v[i+1]-v[i]);
    else{
      int diff = v[i+1] - v[i];
      if(diff > *m.begin()){
        m.erase(m.begin());
        m.insert(diff);
      }
    }
  }

  for(int i: m){
    cout << i << " ";
  }

}
