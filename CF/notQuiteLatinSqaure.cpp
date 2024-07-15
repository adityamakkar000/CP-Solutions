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
  vector<vector<int>> v;
  int row;
  for(int i = 0; i < 3; i++){
    vector<int> temp;
    for(int j = 0; j < 3; j++){
      char a; cin >> a;
      if(a == '?') row = j;
      temp.push_back(a);
    }
    v.push_back(temp);
  }

  bool a = false, b = false, c = false;
  for(int i = 0; i < 3; i++){
    if(v[i][row] == 'A') a = true;
    else if (v[i][row] == 'B') b = true;
    else if (v[i][row] == 'C') c = true;
  }
  if(!a) cout << 'A' << endl;
  else if(!b) cout << 'B' << endl;
  else if(!c) cout << 'C' << endl;

}

int32_t main(){
  int t; cin >> t;
  while(t--){
    solve();
  }

}
