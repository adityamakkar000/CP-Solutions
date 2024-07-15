#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int


int32_t main(){

  int n,m; cin >> n >> m;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v.push_back(a);
  }

  vector<int> candycanes;
  for(int i = 0; i < m; i++){
    int a; cin >> a;
    candycanes.push_back(a);
  }

  for(int k: candycanes){
    int i = 1, j = k;
    for(int l = 0; l < n; l++){
      if(v[l] - i + 1 > 0 && i <= j){
        bool check = true;
        int diff = v[l] - i + 1;
        if(diff > j - i + 1){
          diff = j - i + 1;
          check = false;
        }
        if(check) i = v[l] + 1;
        else i = j + 1;
        v[l] += diff;
      }
      if(i > j) break;
    }
  }
  for(auto k: v) cout << k << endl;


}
