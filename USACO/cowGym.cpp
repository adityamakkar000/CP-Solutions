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

  freopen("pails.in","r",stdin);
  freopen("pails.out", "w", stdout);
  int k,n; cin >> k >> n;

  map<int, vector<bool>> m;
  vector<vector<int>> rankings;

  for(int i = 0; i < k; i++){
    vector<int> temp;
    for(int j = 0; j < n; j++){
      int a; cin >> a;
      temp.push_back(a);
    }
    rankings.push_back(temp);

  }

  for(int i = 0; i < k; i++){
    for(int j = 0; j < n; j++){
      for(int )
    }
  }


}
