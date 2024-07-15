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

bool check(vector<int> v){
  int intial = v[0];
  for(int i = 1; i < v.size(); i++){
    if(intial != v[i]) return false;
  }
  return true;
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

  bool c = check(v);
  int count = 0;
  int i = 0, j = 0;
  while(!c){
    int sum = 0;
    vector<int> temp;
    for(int k = 0; k < n; k++){
      sum += v[k];
      if(sum >= m){
        temp.push_back(sum);
        m = max(m,sum);
        sum = 0;
        count++;
      }
      if()
    }

     v = temp;
    for(int i: v){
      cout << i << " ";
    }
    cout << endl;

     c = check(v);
  }
  cout << count << endl;
}

int32_t main(){

  // freopen("balancing.in","r",stdin);
  // freopen("balancing.out", "w", stdout);

  int t; cin >>t;
  while(t--){
    solve();
  }





}
