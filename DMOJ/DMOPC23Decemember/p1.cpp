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

  int n, k; cin >> n >> k;

  set<int> v;
  for(int i = 1; i <= n*n; i++){
    v.insert(i);
  }

  vector<int> rows(n,0);
  vector<vector<int>> ans;
  for(int i = 0; i < n; i++){
    ans.push_back(rows);
  }

  for(int i = 0; i < k; i++){
    ans[i][i] = *prev(v.end());
    v.erase(prev(v.end()));
  }


  for(int i = k; i < n; i++){
    ans[i][i] = *v.begin();
    v.erase(v.begin());
  }



  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(ans[i][j] == 0){
        ans[i][j] = *prev(v.end());
        v.erase(prev(v.end()));
      }
      if(ans[j][i] == 0){
        ans[j][i] = *prev(v.end());
        v.erase(prev(v.end()));
      }
    }
  }



  for(auto j: ans){
    for(int i: j){
      cout << i << " ";
    }
    cout << endl;
  }

}
