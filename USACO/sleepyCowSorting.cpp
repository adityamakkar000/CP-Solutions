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
  freopen("herding.in","r",stdin);
  freopen("herding.out", "w", stdout);

  int n; cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v.push_back(a);
  }

  vector<int> v2 = v;
  map<int, bool> spots;

  for(int i = 0; i < n; i++){
    if(v[i] == i+1){
      spots[i+1] = true;
    }
    else{
      spots[i+1] = false;
    }
  }

  int count = 0;
  bool sorted = false;
  while(!sorted){
    int temp = v[0];
    if(spots[temp]){

    }else{
      vector<int> t1(v.begin() + 1, v.begin() + temp);
      vector<int> t2(v.begin() + temp + 1, v.end());
      v.clear();
      for(auto k: t1){
        v.push_back(k);
      }
      v.push_back(temp);
      for(auto k: t2){
        v.push_back(k);
      }
    }
    count++;

  }

}
