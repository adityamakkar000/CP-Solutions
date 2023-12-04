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


int count(vector<bool> arr){
  int c = 0;
  for(bool i: arr){
    if(i) c++;
  }
  return c;
}


int32_t main(){

  freopen("lifeguards.in","r",stdin);
  freopen("lifeguards.out", "w", stdout);

  int n; cin >> n;
  vector<pair<int,int>> v;

  for(int i = 0; i < n; i++){
    int a,b;
    cin >> a >> b;
    v.push_back(make_pair(a,b));
  }

  int ans = 0;
  for(int i = 0; i < n; i++){
    vector<bool> arr(1001,0);
    for(int j = 0; j < n; j++){
      if(j != i){
        for(int k = v[j].first; k < v[j].second; k++){
          arr[k] = true;
        }
      }
      ans = max(ans, count(arr));
    }
  }
  cout << ans << endl;
}
