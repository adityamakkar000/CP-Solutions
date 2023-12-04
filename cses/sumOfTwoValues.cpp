#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long

int32_t main(){

  int n, x; cin >> n >> x;

  map<int,int> m;
  vector<int> v;
  for(int i = 1; i <= n; i++){
    int a;cin >> a;
    m[a] = i;
    v.push_back(a);
  }
  bool c = false;
  for(int i =0; i < n; i++){

    if(m[x-v[i]] != 0 && (m[x-v[i]]-1 != i)){
      cout << (i+1) << " " << m[x-v[i]];
      c = true;
      break;
    }
  }

  if(!c){
    cout << "IMPOSSIBLE";
  }

}
