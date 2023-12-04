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

  int m = floor((n*n + 3*n)/5);
  vector<int> temp(n,0);

  vector<vector<int>> ans;
  for(int i = 0; i < n; i++){
    ans.push_back(temp);
  }
  int c = 0;
  for(int i = 0; i < n; i++){
    if((i-2)%5 == 0){
      c += n;
      for(int j = 0; j < n; j++){
        ans[i][j] = 1;
      }
    }
  }

  if(n % 2 == 1){
    for(int i = 0; i < n; i++){
      ans[n-2][i] = 0;
      ans[n-3][i] = 1; 
    }
  }

  if(c <= m){
    for(auto k: ans){
      for(int i: k){
        cout << i << " ";
      }
      cout << endl;
    }
  } else{
    cout << "-1";
  }


}
